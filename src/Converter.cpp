#include "Converter.h"
#include <sstream>

namespace GBAsm {

Converter::Converter() = default;
Converter::~Converter() = default;

std::string Converter::ConvertToC(const std::string& asmSource) {

    auto instructions = m_parser.Parse(asmSource);
    

    m_analyzer.Analyze(instructions);
    

    std::ostringstream output;
    

    output << "// Generated C code from Game Boy Assembly\n";
    output << "// WARNING: This is a best-effort conversion and may need manual adjustment\n\n";
    

    output << "#include <stdint.h>\n";
    output << "#include <stdbool.h>\n\n";
    
    // Generate macro definitions
    const auto& macros = m_analyzer.GetMacros();
    if (!macros.empty()) {
        output << "// Macro definitions\n";
        for (const auto& [name, macro] : macros) {
            output << macro.definition << "\n";
        }
        output << "\n";
    }
    
    // Generate global variables
    const auto& variables = m_analyzer.GetVariables();
    if (!variables.empty()) {
        output << "// Global variables\n";
        output << m_generator.GenerateVariableDeclarations(variables);
        output << "\n";
    }
    
    // Generate function forward declarations
    const auto& functions = m_analyzer.GetFunctions();
    if (!functions.empty()) {
        output << "// Forward declarations\n";
        for (const auto& func : functions) {
            output << m_generator.GenerateFunctionSignature(func) << ";\n";
        }
        output << "\n";
    }
    
    // Generate function implementations
    for (const auto& func : functions) {
        output << m_generator.Generate(func, variables) << "\n";
    }
    
    return output.str();
}

std::string Converter::ConvertFunction(const std::string& asmSource, int cursorLine) {

    auto instructions = m_parser.Parse(asmSource);
    

    m_analyzer.Analyze(instructions);
    

    const auto& functions = m_analyzer.GetFunctions();
    const Function* targetFunc = FindFunctionAtLine(cursorLine);
    
    if (!targetFunc) {
        return "// No function found at line " + std::to_string(cursorLine);
    }
    

    std::ostringstream output;
    
    output << "// Function: " << targetFunc->name << "\n";
    output << "// Lines: " << targetFunc->startLine << "-" << targetFunc->endLine << "\n\n";
    
    const auto& variables = m_analyzer.GetVariables();
    output << m_generator.Generate(*targetFunc, variables);
    
    return output.str();
}

const std::vector<Function>& Converter::GetFunctions() const {
    return m_analyzer.GetFunctions();
}

const std::map<std::string, Variable>& Converter::GetVariables() const {
    return m_analyzer.GetVariables();
}

const Function* Converter::FindFunctionAtLine(int lineNumber) const {
    const auto& functions = m_analyzer.GetFunctions();
    
    for (const auto& func : functions) {
        if (lineNumber >= func.startLine && lineNumber <= func.endLine) {
            return &func;
        }
    }
    
    return nullptr;
}

} // namespace GBAsm
