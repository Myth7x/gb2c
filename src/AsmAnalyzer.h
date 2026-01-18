#pragma once

#include "Instruction.h"
#include "Function.h"
#include "Variable.h"
#include <vector>
#include <map>
#include <string>

namespace GBAsm {

class AsmAnalyzer {
public:
    AsmAnalyzer();
    ~AsmAnalyzer();
    
    void Analyze(const std::vector<Instruction>& instructions);
    
    const std::vector<Function>& GetFunctions() const;
    const std::map<std::string, Variable>& GetVariables() const;
    
private:
    void FindVariables();
    void FindFunctions();
    
    void RegisterVariable(const std::string& name, const Variable& var);
    
    std::vector<Instruction> m_instructions;
    std::vector<Function> m_functions;
    std::map<std::string, Variable> m_variables;
};

} // namespace GBAsm
