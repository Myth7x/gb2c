#include "AsmAnalyzer.h"
#include <algorithm>

namespace GBAsm {

AsmAnalyzer::AsmAnalyzer() = default;
AsmAnalyzer::~AsmAnalyzer() = default;

void AsmAnalyzer::Analyze(const std::vector<Instruction>& instructions) {
    m_instructions = instructions;
    m_functions.clear();
    m_variables.clear();
    m_macros.clear();
    
    FindVariables();
    FindFunctions();
    FindMacros();
}

const std::vector<Function>& AsmAnalyzer::GetFunctions() const {
    return m_functions;
}

const std::map<std::string, Variable>& AsmAnalyzer::GetVariables() const {
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

} // namespace GBAsm
