#pragma once

#include "Instruction.h"
#include <string>
#include <vector>

namespace GBAsm {

class AsmParser {
public:
    AsmParser();
    ~AsmParser();
    
    std::vector<Instruction> Parse(const std::string& source);
    
private:
    Instruction ParseLine(const std::string& line, int lineNumber);
    std::string ExtractLabel(const std::string& line);
    std::string ExtractMnemonic(const std::string& line);
    std::vector<Operand> ExtractOperands(const std::string& line, const std::string& mnemonic);
    std::string ExtractComment(const std::string& line);
    std::string StripComment(const std::string& line);
    
    Operand ParseOperand(const std::string& operandStr);
    
    bool IsLabel(const std::string& line);
    bool IsDirective(const std::string& line);
    bool IsComment(const std::string& line);
    bool IsMemoryAccess(const std::string& operand);
    
    std::string Trim(const std::string& str);
    std::string ToLower(const std::string& str);
    std::vector<std::string> SplitOperands(const std::string& operands);
};

} // namespace GBAsm
