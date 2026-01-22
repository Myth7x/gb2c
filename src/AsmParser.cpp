#include "AsmParser.h"
#include <sstream>
#include <algorithm>
#include <cctype>

namespace GBAsm {

AsmParser::AsmParser() = default;
AsmParser::~AsmParser() = default;

std::vector<Instruction> AsmParser::Parse(const std::string& source) {
    std::vector<Instruction> instructions;
    std::istringstream stream(source);
    std::string line;
    int lineNumber = 0;
    bool insideMacro = false;
    
    while (std::getline(stream, line)) {
        lineNumber++;
        
        // Check if we're entering or leaving a MACRO block
        std::string trimmed = Trim(line);
        if (trimmed.find("MACRO") == 0) {
            insideMacro = true;
            // Add a comment to indicate MACRO was skipped
            Instruction inst;
            inst.lineNumber = lineNumber;
            inst.type = InstructionType::Comment;
            inst.comment = "MACRO definition skipped";
            instructions.push_back(inst);
            continue;
        }
        if (trimmed == "ENDM" || trimmed.find("ENDM") == 0) {
            insideMacro = false;
            continue;
        }
        
        // Skip all lines inside MACRO blocks
        if (insideMacro) {
            continue;
        }
        
        auto inst = ParseLine(line, lineNumber);
        instructions.push_back(inst);
    }
    
    return instructions;
}

Instruction AsmParser::ParseLine(const std::string& line, int lineNumber) {
    Instruction inst;
    inst.lineNumber = lineNumber;
    
    if (IsComment(line)) {
        inst.type = InstructionType::Comment;
        inst.comment = Trim(line.substr(1));
        return inst;
    }
    
    std::string cleaned = StripComment(line);
    cleaned = Trim(cleaned);
    
    if (cleaned.empty()) {
        inst.type = InstructionType::Comment;
        return inst;
    }
    
    if (IsLabel(cleaned)) {
        inst.type = InstructionType::Label;
        inst.label = ExtractLabel(cleaned);
        return inst;
    }
    
    if (IsDirective(cleaned)) {
        inst.type = InstructionType::Directive;
        inst.mnemonic = cleaned;
        return inst;
    }
    
    inst.mnemonic = ExtractMnemonic(cleaned);
    
    if (Instruction::IsMacro(inst.mnemonic)) {
        inst.type = InstructionType::Macro;
        inst.operands = ExtractOperands(cleaned, inst.mnemonic);
        inst.comment = ExtractComment(line);
        return inst;
    }
    
    inst.type = Instruction::ClassifyMnemonic(inst.mnemonic);
    inst.operands = ExtractOperands(cleaned, inst.mnemonic);
    inst.comment = ExtractComment(line);
    
    return inst;
}

std::string AsmParser::ExtractLabel(const std::string& line) {
    std::string trimmed = Trim(line);
    size_t colonPos = trimmed.find("::");
    if (colonPos != std::string::npos) {
        return Trim(trimmed.substr(0, colonPos));
    }
    
    colonPos = trimmed.find(':');
    if (colonPos != std::string::npos) {
        return Trim(trimmed.substr(0, colonPos));
    }
    
    // Check for local labels without colons (e.g., ".loop" on its own line)
    if (trimmed[0] == '.' && trimmed.length() > 1 && std::isalpha(trimmed[1])) {
        return trimmed;
    }
    
    return "";
}

std::string AsmParser::ExtractMnemonic(const std::string& line) {
    std::string cleaned = Trim(line);
    size_t spacePos = cleaned.find(' ');
    size_t tabPos = cleaned.find('\t');
    size_t endPos = std::min(spacePos, tabPos);
    
    if (endPos == std::string::npos) {
        return ToLower(cleaned);
    }
    
    return ToLower(Trim(cleaned.substr(0, endPos)));
}

std::vector<Operand> AsmParser::ExtractOperands(const std::string& line, const std::string& mnemonic) {
    std::vector<Operand> operands;
    
    size_t spacePos = line.find(' ');
    size_t tabPos = line.find('\t');
    size_t startPos = std::min(spacePos, tabPos);
    
    if (startPos == std::string::npos) {
        return operands;
    }
    
    std::string operandStr = Trim(line.substr(startPos + 1));
    auto parts = SplitOperands(operandStr);
    
    for (const auto& part : parts) {
        operands.push_back(ParseOperand(part));
    }
    
    return operands;
}

std::string AsmParser::ExtractComment(const std::string& line) {
    size_t commentPos = line.find(';');
    if (commentPos != std::string::npos) {
        return Trim(line.substr(commentPos + 1));
    }
    return "";
}

std::string AsmParser::StripComment(const std::string& line) {
    size_t commentPos = line.find(';');
    if (commentPos != std::string::npos) {
        return line.substr(0, commentPos);
    }
    return line;
}

Operand AsmParser::ParseOperand(const std::string& operandStr) {
    Operand operand;
    std::string trimmed = Trim(operandStr);
    
    operand.isIndirect = IsMemoryAccess(trimmed);
    
    if (operand.isIndirect) {
        size_t start = trimmed.find('[');
        size_t end = trimmed.find(']');
        trimmed = Trim(trimmed.substr(start + 1, end - start - 1));
    }
    
    if (Instruction::IsRegisterName(trimmed)) {
        operand.type = OperandType::Register;
        operand.reg = Instruction::ParseRegisterName(trimmed);
        operand.value = trimmed;
    } else if (trimmed[0] == '$') {
        operand.type = OperandType::Immediate;
        operand.value = "0x" + trimmed.substr(1);
        operand.immediateValue = std::stoi(trimmed.substr(1), nullptr, 16);
    } else if (trimmed[0] == '%') {
        operand.type = OperandType::Immediate;
        operand.value = "0b" + trimmed.substr(1);
        operand.immediateValue = std::stoi(trimmed.substr(1), nullptr, 2);
    } else if (std::isdigit(trimmed[0])) {
        operand.type = OperandType::Immediate;
        operand.value = trimmed;
        operand.immediateValue = std::stoi(trimmed);
    } else if (trimmed[0] == 'r' && trimmed.length() > 1 && std::isupper(trimmed[1])) {
        operand.type = OperandType::HardwareReg;
        operand.value = trimmed;
    } else if (trimmed[0] == 'h' && trimmed.length() > 1 && std::isupper(trimmed[1])) {
        operand.type = OperandType::HighRAM;
        operand.value = trimmed;
    } else if (trimmed[0] == 'w' && trimmed.length() > 1 && std::isupper(trimmed[1])) {
        operand.type = OperandType::Memory;
        operand.value = trimmed;
    } else {
        operand.type = OperandType::Label;
        operand.value = trimmed;
    }
    
    return operand;
}

bool AsmParser::IsLabel(const std::string& line) {
    std::string trimmed = Trim(line);
    if (trimmed.empty() || trimmed[0] == ';') return false;
    
    // Check for explicit labels with colons
    if (trimmed.find("::") != std::string::npos || trimmed.find(':') != std::string::npos) {
        return true;
    }
    
    // Check for local labels (start with '.' followed by a letter)
    if (trimmed[0] == '.' && trimmed.length() > 1 && std::isalpha(trimmed[1])) {
        return true;
    }
    
    return false;
}

bool AsmParser::IsDirective(const std::string& line) {
    std::string trimmed = Trim(line);
    if (trimmed.empty()) return false;
    
    // Check for MACRO definitions (skip entire blocks)
    if (trimmed.find("MACRO") == 0 || trimmed == "ENDM") {
        return true;
    }
    
    // Local labels start with '.' followed by a letter - they're not directives
    if (trimmed[0] == '.' && trimmed.length() > 1 && std::isalpha(trimmed[1])) {
        return false;
    }
    
    // Other things starting with '.' are directives
    return trimmed[0] == '.' || trimmed[0] == '#';
}

bool AsmParser::IsComment(const std::string& line) {
    std::string trimmed = Trim(line);
    return !trimmed.empty() && trimmed[0] == ';';
}

bool AsmParser::IsMemoryAccess(const std::string& operand) {
    return operand.find('[') != std::string::npos;
}

std::string AsmParser::Trim(const std::string& str) {
    const char* whitespace = " \t\n\r";
    size_t start = str.find_first_not_of(whitespace);
    if (start == std::string::npos) return "";
    size_t end = str.find_last_not_of(whitespace);
    return str.substr(start, end - start + 1);
}

std::string AsmParser::ToLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(),
                  [](unsigned char c) { return std::tolower(c); });
    return result;
}

std::vector<std::string> AsmParser::SplitOperands(const std::string& operands) {
    std::vector<std::string> result;
    std::string current;
    int bracketDepth = 0;
    
    for (char c : operands) {
        if (c == '[') {
            bracketDepth++;
            current += c;
        } else if (c == ']') {
            bracketDepth--;
            current += c;
        } else if (c == ',' && bracketDepth == 0) {
            result.push_back(Trim(current));
            current.clear();
        } else {
            current += c;
        }
    }
    
    if (!current.empty()) {
        result.push_back(Trim(current));
    }
    
    return result;
}

} // namespace GBAsm
