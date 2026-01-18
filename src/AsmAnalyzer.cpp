#include "AsmAnalyzer.h"
#include <algorithm>

namespace GBAsm {

AsmAnalyzer::AsmAnalyzer() = default;
AsmAnalyzer::~AsmAnalyzer() = default;

void AsmAnalyzer::Analyze(const std::vector<Instruction>& instructions) {
    m_instructions = instructions;
    m_functions.clear();
    m_variables.clear();
    
    FindVariables();
    FindFunctions();
}

const std::vector<Function>& AsmAnalyzer::GetFunctions() const {
    return m_functions;
}

const std::map<std::string, Variable>& AsmAnalyzer::GetVariables() const {
    return m_variables;
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

} // namespace GBAsm
