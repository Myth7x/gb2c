#pragma once

#include "Instruction.h"
#include "Function.h"
#include "Variable.h"
#include <vector>
#include <map>
#include <string>

namespace GBAsm {

struct MacroDefinition {
    std::string name;
    std::vector<std::string> parameters;
    std::string expansion;  // C equivalent
    int paramCount;
    
    MacroDefinition() : paramCount(0) {}
    MacroDefinition(const std::string& n, int pc, const std::string& exp) 
        : name(n), paramCount(pc), expansion(exp) {}
};

class AsmAnalyzer {
public:
    AsmAnalyzer();
    ~AsmAnalyzer();
    
    void Analyze(const std::vector<Instruction>& instructions);
    
    const std::vector<Function>& GetFunctions() const;
    const std::map<std::string, Variable>& GetVariables() const;
    const std::map<std::string, MacroDefinition>& GetMacros() const;
    
private:
    void FindVariables();
    void FindFunctions();
    void FindMacros();
    
    void RegisterVariable(const std::string& name, const Variable& var);
    void RegisterMacro(const std::string& name, const MacroDefinition& macro);
    
    std::vector<Instruction> m_instructions;
    std::vector<Function> m_functions;
    std::map<std::string, Variable> m_variables;
    std::map<std::string, MacroDefinition> m_macros;
};

} // namespace GBAsm
