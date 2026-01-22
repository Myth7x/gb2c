#include "AsmAnalyzer.h"
#include <algorithm>
#include <iostream>
#include <sstream>
#include "defines.h"

namespace GBAsm {

AsmAnalyzer::AsmAnalyzer() = default;
AsmAnalyzer::~AsmAnalyzer() = default;

void AsmAnalyzer::Analyze(const std::vector<Instruction>& instructions) {
    m_instructions = instructions;
    m_functions.clear();
    m_functionCalls.clear();
    m_variables.clear();
    m_macros.clear();
    m_functionRefs.clear();
    m_variableRefs.clear();
    
    FindVariables();
    FindFunctions();
    FindFunctionCalls();
    FindMacros();
    AnalyzeReferences();
}

const std::vector<Function>& AsmAnalyzer::GetFunctions() const {
#ifdef ENABLE_DEBUG_LOGGING
    std::cout << "=== Function Definitions ==="<< "\n";
    for (const auto& func : m_functions) {
        std::cout << "Function defined: " << func.name << " (lines "
                    << func.startLine << "-" << func.endLine << ")\n";
    }
#endif
    return m_functions;
}

const std::set<std::string>& AsmAnalyzer::GetFunctionCalls() const {
#ifdef ENABLE_DEBUG_LOGGING
    std::cout << "=== Function Calls ==="<< "\n";
    for (const auto& call : m_functionCalls) {
        std::cout << "Function called: " << call << "\n";
    }
#endif
    return m_functionCalls;
}

const std::map<std::string, Variable>& AsmAnalyzer::GetVariables() const {
#ifdef ENABLE_DEBUG_LOGGING
    std::cout << "=== Variables Found ==="<< "\n";
    for (const auto& [name, var] : m_variables) {
        std::cout << "Variable found: " << name << " of type " << var
                    .cType << (var.isVolatile ? " (volatile)" : "") << "\n";
    }
#endif
    return m_variables;
}

const std::map<std::string, MacroDefinition>& AsmAnalyzer::GetMacros() const {
    return m_macros;
}

void AsmAnalyzer::FindVariables() {
    for (const auto& inst : m_instructions) {
        for (const auto& operand : inst.operands) {
            if (operand.IsHardwareReg()) {
                RegisterVariable(operand.value, Variable::CreateHardwareReg(operand.value));
            } else if (operand.IsHighRAM()) {
                RegisterVariable(operand.value, Variable::CreateHighRAM(operand.value));
            } else if (operand.IsMemory() && 
                      operand.value.find("w") == 0 && 
                      operand.value.length() > 1 &&
                      std::isupper(operand.value[1])) {
                RegisterVariable(operand.value, Variable::CreateMemoryVar(operand.value));
            }
        }
    }
}

void AsmAnalyzer::FindFunctions() {
    for (size_t i = 0; i < m_instructions.size(); i++) {
        if (Function::IsStartLabel(m_instructions[i])) {
            size_t endIdx = Function::FindEnd(m_instructions, i);
            Function func = Function::FromInstructions(m_instructions, i, endIdx);
            if (!func.name.empty()) {
                m_functions.push_back(func);
                // Skip to the end of this function to avoid processing instructions twice
                i = endIdx;
            }
        }
    }
}

void AsmAnalyzer::FindFunctionCalls() {
    for (const auto& inst : m_instructions) {
        if (inst.IsCall() && !inst.operands.empty()) {
            m_functionCalls.insert(inst.operands[0].value);
        }
    }
}

void AsmAnalyzer::RegisterVariable(const std::string& name, const Variable& var) {
    if (m_variables.find(name) == m_variables.end()) {
        m_variables[name] = var;
    }
}

void AsmAnalyzer::RegisterMacro(const std::string& name, const MacroDefinition& macro) {
    if (m_macros.find(name) == m_macros.end()) {
        m_macros[name] = macro;
    }
}

void AsmAnalyzer::FindMacros() {
    // Define common Game Boy assembly macros and their C equivalents
    
    // Coordinate macros - calculate tile map address
    RegisterMacro("hlcoord", MacroDefinition("hlcoord", 2, 
        "#define hlcoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))"));
    RegisterMacro("dwcoord", MacroDefinition("dwcoord", 2,
        "#define dwcoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))"));
    RegisterMacro("bccoord", MacroDefinition("bccoord", 2,
        "#define bccoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))"));
    RegisterMacro("decoord", MacroDefinition("decoord", 2,
        "#define decoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))"));
    
    // Load byte macro - loads two 8-bit values into a 16-bit register
    RegisterMacro("lb", MacroDefinition("lb", 3,
        "#define lb(reg16, high, low) ((reg16) = (((high) << 8) | (low)))"));
    
    // Far call/jump macros - banking operations
    RegisterMacro("callfar", MacroDefinition("callfar", 1,
        "#define callfar(func) func() /* TODO: handle banking */"));
    RegisterMacro("farcall", MacroDefinition("farcall", 1,
        "#define farcall(func) func() /* TODO: handle banking */"));
    RegisterMacro("jpfar", MacroDefinition("jpfar", 1,
        "#define jpfar(label) goto label /* TODO: handle banking */"));
    RegisterMacro("homecall", MacroDefinition("homecall", 1,
        "#define homecall(func) func() /* HOME bank call */"));
    
    // Text macros
    RegisterMacro("text_far", MacroDefinition("text_far", 1,
        "#define text_far(text) /* Text data: text */"));
    RegisterMacro("text_end", MacroDefinition("text_end", 0,
        "#define text_end() /* End of text */"));
    RegisterMacro("text_start", MacroDefinition("text_start", 0,
        "#define text_start() /* Start of text */"));
    
    // Predef - predefined function call
    RegisterMacro("predef", MacroDefinition("predef", 1,
        "#define predef(id) predef_##id() /* Predefined function */"));
    
    // Data directives
    RegisterMacro("db", MacroDefinition("db", -1,
        "#define db(...) /* Define byte(s) */"));
    RegisterMacro("dw", MacroDefinition("dw", -1,
        "#define dw(...) /* Define word(s) */"));
    RegisterMacro("ds", MacroDefinition("ds", 1,
        "#define ds(size) /* Define space */"));
    
    // Scan through instructions to find used macros
    for (const auto& inst : m_instructions) {
        if (inst.type == InstructionType::Macro) {
            // Macro is already registered in the map, just mark it as used
            auto it = m_macros.find(inst.mnemonic);
            if (it == m_macros.end()) {
                // Unknown macro, create a generic definition
                std::string genericDef = "#define " + inst.mnemonic + "(...) /* " + inst.mnemonic + " macro */";
                RegisterMacro(inst.mnemonic, MacroDefinition(inst.mnemonic, -1, genericDef));
            }
        }
    }
}

void AsmAnalyzer::AnalyzeReferences() {
    // Initialize function references
    for (const auto& func : m_functions) {
        FunctionInfo info;
        info.function = func;
        m_functionRefs[func.name] = info;
    }
    
    // Initialize variable references
    for (const auto& [name, var] : m_variables) {
        VariableInfo info;
        info.variable = var;
        m_variableRefs[name] = info;
    }
    
    // Analyze each function for calls and variable usage
    for (const auto& func : m_functions) {
        for (const auto& inst : func.instructions) {
            // Track function calls
            if (inst.IsCall() && !inst.operands.empty()) {
                std::string calledFunc = inst.operands[0].value;
                if (m_functionRefs.find(calledFunc) != m_functionRefs.end()) {
                    // Add to this function's call list
                    m_functionRefs[func.name].calls.push_back(calledFunc);
                    
                    // Add reference to the called function
                    m_functionRefs[calledFunc].calledFrom.push_back(
                        Reference(func.name, inst.lineNumber, inst.mnemonic + " " + calledFunc));
                }
            }
            
            // Track variable usage
            for (const auto& operand : inst.operands) {
                if (operand.IsHardwareReg() || operand.IsHighRAM() || operand.IsMemory()) {
                    if (m_variableRefs.find(operand.value) != m_variableRefs.end()) {
                        m_variableRefs[operand.value].usedIn.push_back(
                            Reference(func.name, inst.lineNumber, inst.mnemonic));
                    }
                }
            }
        }
    }
}

std::map<std::string, FunctionInfo> AsmAnalyzer::GetFunctionReferences() const {
    return m_functionRefs;
}

std::map<std::string, VariableInfo> AsmAnalyzer::GetVariableReferences() const {
    return m_variableRefs;
}

std::string AsmAnalyzer::FormatFunctionReferences() const {
    std::ostringstream output;
    output << "=== FUNCTION REFERENCE REPORT ===\n\n";
    output << "Total Functions: " << m_functionRefs.size() << "\n\n";
    
    for (const auto& [name, info] : m_functionRefs) {
        output << "Function: " << name << "\n";
        output << "  Return Type: " << info.function.returnType << "\n";
        output << "  Lines: " << info.function.startLine << "-" << info.function.endLine << "\n";
        output << "  Instructions: " << info.function.instructions.size() << "\n";
        
        if (!info.calls.empty()) {
            output << "  Calls (" << info.calls.size() << "):\n";
            for (const auto& call : info.calls) {
                output << "    - " << call << "\n";
            }
        }
        
        if (!info.calledFrom.empty()) {
            output << "  Called From (" << info.calledFrom.size() << " locations):\n";
            for (const auto& ref : info.calledFrom) {
                output << "    - " << ref.location << " (line " << ref.lineNumber << ")\n";
            }
        } else {
            output << "  Called From: (none - possibly unused or entry point)\n";
        }
        
        output << "\n";
    }
    
    return output.str();
}

std::string AsmAnalyzer::FormatVariableReferences() const {
    std::ostringstream output;
    output << "=== VARIABLE REFERENCE REPORT ===\n\n";
    output << "Total Variables: " << m_variableRefs.size() << "\n\n";
    
    for (const auto& [name, info] : m_variableRefs) {
        output << "Variable: " << name << "\n";
        output << "  Type: " << info.variable.cType;
        if (info.variable.isVolatile) output << " (volatile)";
        if (info.variable.isArray) output << "[" << info.variable.arraySize << "]";
        output << "\n";
        
        if (!info.usedIn.empty()) {
            output << "  Used In (" << info.usedIn.size() << " locations):\n";
            // Group by function
            std::map<std::string, int> usageCount;
            for (const auto& ref : info.usedIn) {
                usageCount[ref.location]++;
            }
            for (const auto& [func, count] : usageCount) {
                output << "    - " << func << " (" << count << " times)\n";
            }
        } else {
            output << "  Used In: (none - possibly unused)\n";
        }
        
        output << "\n";
    }
    
    return output.str();
}

std::string AsmAnalyzer::FormatAllReferences() const {
    std::ostringstream output;
    output << "=== COMPLETE REFERENCE ANALYSIS ===\n\n";
    output << "Total Functions: " << m_functionRefs.size() << "\n";
    output << "Total Variables: " << m_variableRefs.size() << "\n";
    output << "Total Macros: " << m_macros.size() << "\n\n";
    
    output << FormatFunctionReferences();
    output << "\n" << FormatVariableReferences();
    
    return output.str();
}

} // namespace GBAsm
