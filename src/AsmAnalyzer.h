#pragma once

#include "Instruction.h"
#include "Function.h"
#include "Variable.h"
#include <vector>
#include <map>
#include <set>
#include <string>

namespace GBAsm {

struct MacroDefinition {
    std::string name;
    int paramCount;  // -1 means variadic
    std::string definition;
    
    MacroDefinition() : name(""), paramCount(0), definition("") {}
    MacroDefinition(const std::string& n, int pc, const std::string& def)
        : name(n), paramCount(pc), definition(def) {}
};

struct Reference {
    std::string location;  // Function or file where referenced
    int lineNumber;
    std::string context;   // The line of code where it appears
    
    Reference(const std::string& loc, int line, const std::string& ctx)
        : location(loc), lineNumber(line), context(ctx) {}
};

struct FunctionInfo {
    Function function;
    std::vector<Reference> calledFrom;  // Where this function is called
    std::vector<std::string> calls;     // Functions this one calls
};

struct VariableInfo {
    Variable variable;
    std::vector<Reference> usedIn;      // Where this variable is used
};

class AsmAnalyzer {
public:
    AsmAnalyzer();
    ~AsmAnalyzer();
    
    void Analyze(const std::vector<Instruction>& instructions);
    
    const std::vector<Function>& GetFunctions() const;
    const std::set<std::string>& GetFunctionCalls() const;
    const std::map<std::string, Variable>& GetVariables() const;
    const std::map<std::string, MacroDefinition>& GetMacros() const;
    
    // New: Get detailed information with references
    std::map<std::string, FunctionInfo> GetFunctionReferences() const;
    std::map<std::string, VariableInfo> GetVariableReferences() const;
    
    // New: Format reference information as string
    std::string FormatFunctionReferences() const;
    std::string FormatVariableReferences() const;
    std::string FormatAllReferences() const;
    
private:
    void FindVariables();
    void FindFunctions();
    void FindFunctionCalls();
    void FindMacros();
    void AnalyzeReferences();
    
    void RegisterVariable(const std::string& name, const Variable& var);
    void RegisterMacro(const std::string& name, const MacroDefinition& macro);
    
    std::vector<Instruction> m_instructions;
    std::vector<Function> m_functions;
    std::set<std::string> m_functionCalls;
    std::map<std::string, Variable> m_variables;
    std::map<std::string, MacroDefinition> m_macros;
    
    // Reference tracking
    std::map<std::string, FunctionInfo> m_functionRefs;
    std::map<std::string, VariableInfo> m_variableRefs;
};

} // namespace GBAsm
