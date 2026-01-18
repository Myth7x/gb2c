#pragma once

#include "AsmParser.h"
#include "AsmAnalyzer.h"
#include "CGenerator.h"
#include <string>

namespace GBAsm {

class Converter {
public:
    Converter();
    ~Converter();
    
    std::string ConvertToC(const std::string& asmSource);
    std::string ConvertFunction(const std::string& asmSource, int cursorLine);
    
    const std::vector<Function>& GetFunctions() const;
    const std::map<std::string, Variable>& GetVariables() const;
    
private:
    AsmParser m_parser;
    AsmAnalyzer m_analyzer;
    CGenerator m_generator;
    
    const Function* FindFunctionAtLine(int lineNumber) const;
};

} // namespace GBAsm
