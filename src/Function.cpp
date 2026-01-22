#include "Function.h"

namespace GBAsm {

void Function::AnalyzeReturnType() {
    returnType = "void";
    returnsValue = false;
    returns16Bit = false;
    
    bool usesA = false;
    bool usesHL = false;
    
    for (const auto& inst : instructions) {
        // Check if the instruction uses register A or HL
        for (const auto& operand : inst.operands) {
            if (operand.IsRegister()) {
                if (operand.reg == RegisterType::A) usesA = true;
                if (operand.reg == RegisterType::HL) usesHL = true;
            }
        }
        
        // If we hit a return, determine the return type
        if (inst.IsReturn()) {
            if (usesHL) {
                returnType = "uint16_t";
                returnsValue = true;
                returns16Bit = true;
            } else if (usesA) {
                returnType = "uint8_t";
                returnsValue = true;
            }
        }
    }
}

void Function::AnalyzeVariableUsage() {
    usedVariables.clear();
    
    for (const auto& inst : instructions) {
        // Check operands for variable usage
        for (const auto& operand : inst.operands) {
            if (operand.IsHardwareReg() || operand.IsHighRAM() || operand.IsMemory()) {
                usedVariables.insert(operand.value);
            }
        }
        
        // Check for function calls
        if (inst.IsCall() && !inst.operands.empty()) {
            if (inst.operands[0].IsLabel()) {
                usedVariables.insert(inst.operands[0].value);
            }
        }
    }
}

void Function::BuildLineMapping() {
    asmLineToCLine.clear();
    int cLineNumber = 0;
    
    for (const auto& inst : instructions) {
        if (inst.IsExecutable()) {
            asmLineToCLine[inst.lineNumber] = cLineNumber++;
        }
    }
}

bool Function::IsStartLabel(const Instruction& inst) {
    // A function start label is a Label instruction that:
    // 1. Is not empty
    // 2. Does not start with a dot (local labels start with .)
    // 3. Is not an INCLUDE or other directive
    return inst.type == InstructionType::Label && 
           !inst.label.empty() &&
           inst.label[0] != '.';
}

size_t Function::FindEnd(const std::vector<Instruction>& instructions, size_t startIdx) {
    size_t lastReturn = startIdx;
    
    for (size_t i = startIdx + 1; i < instructions.size(); i++) {
        // Track the last return we see
        if (instructions[i].IsReturn()) {
            lastReturn = i;
        }
        // Stop when we hit the next function (a non-local label)
        if (IsStartLabel(instructions[i])) {
            return i - 1;
        }
    }
    
    // If we found any return, use that, otherwise use end of file
    return lastReturn > startIdx ? lastReturn : instructions.size() - 1;
}

Function Function::FromInstructions(const std::vector<Instruction>& instructions, 
                                   size_t startIdx, size_t endIdx) {
    Function func;
    
    if (startIdx < instructions.size()) {
        func.name = instructions[startIdx].label;
        func.startLine = instructions[startIdx].lineNumber;
        func.endLine = instructions[endIdx].lineNumber;
        
        // Copy instructions
        for (size_t i = startIdx; i <= endIdx && i < instructions.size(); i++) {
            func.instructions.push_back(instructions[i]);
        }
        
        // Analyze the function
        func.AnalyzeReturnType();
        func.AnalyzeVariableUsage();
        func.BuildLineMapping();
    }
    
    return func;
}

} // namespace GBAsm
