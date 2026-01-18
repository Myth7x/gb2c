#pragma once

#include "Instruction.h"
#include <string>
#include <vector>
#include <set>
#include <map>

namespace GBAsm {

struct Function {
    std::string name;
    std::string returnType;
    std::vector<std::string> parameters;
    std::vector<Instruction> instructions;
    std::set<std::string> usedVariables;
    std::set<std::string> localVariables;
    std::map<int, int> asmLineToCLine;
    int startLine;
    int endLine;
    bool returns16Bit;
    bool returnsValue;
    
    // Helper methods for function analysis
    void AnalyzeReturnType();
    void AnalyzeVariableUsage();
    void BuildLineMapping();
    
    // Static helper methods
    static bool IsStartLabel(const Instruction& inst);
    static size_t FindEnd(const std::vector<Instruction>& instructions, size_t startIdx);
    static Function FromInstructions(const std::vector<Instruction>& instructions, size_t startIdx, size_t endIdx);
};

} // namespace GBAsm
