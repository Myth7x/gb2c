#include "gbasm_to_c/Instruction.h"
#include <algorithm>
#include <cctype>

namespace GBAsm {

// Static helper to convert string to lowercase
static std::string ToLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(),
                  [](unsigned char c) { return std::tolower(c); });
    return result;
}

InstructionType Instruction::ClassifyMnemonic(const std::string& mnemonic) {
    std::string lower = ToLower(mnemonic);
    
    if (lower == "ld" || lower == "ldh" || lower == "ldi" || lower == "ldd") {
        return InstructionType::Load;
    }
    
    if (lower == "add" || lower == "adc" || lower == "sub" || lower == "sbc" ||
        lower == "inc" || lower == "dec" || lower == "and" || lower == "or" ||
        lower == "xor" || lower == "cp" || lower == "cpl" || lower == "neg") {
        return InstructionType::Arithmetic;
    }
    
    if (lower == "bit" || lower == "set" || lower == "res") {
        return InstructionType::Bit;
    }
    
    if (lower == "jp" || lower == "jr" || lower.find("jp") == 0 || lower.find("jr") == 0) {
        return InstructionType::Jump;
    }
    
    if (lower == "call" || lower.find("call") == 0) {
        return InstructionType::Call;
    }
    
    if (lower == "ret" || lower == "reti" || lower.find("ret") == 0) {
        return InstructionType::Return;
    }
    
    if (lower == "push" || lower == "pop") {
        return InstructionType::Stack;
    }
    
    if (lower == "rlca" || lower == "rrca" || lower == "rla" || lower == "rra" ||
        lower == "rlc" || lower == "rrc" || lower == "rl" || lower == "rr") {
        return InstructionType::Rotate;
    }
    
    if (lower == "sla" || lower == "sra" || lower == "srl" || lower == "swap") {
        return InstructionType::Shift;
    }
    
    return InstructionType::Misc;
}

bool Instruction::IsRegisterName(const std::string& token) {
    std::string lower = ToLower(token);
    return lower == "a" || lower == "b" || lower == "c" || lower == "d" ||
           lower == "e" || lower == "h" || lower == "l" ||
           lower == "bc" || lower == "de" || lower == "hl" || lower == "sp" || lower == "af";
}

RegisterType Instruction::ParseRegisterName(const std::string& regName) {
    std::string lower = ToLower(regName);
    
    if (lower == "a") return RegisterType::A;
    if (lower == "b") return RegisterType::B;
    if (lower == "c") return RegisterType::C;
    if (lower == "d") return RegisterType::D;
    if (lower == "e") return RegisterType::E;
    if (lower == "h") return RegisterType::H;
    if (lower == "l") return RegisterType::L;
    if (lower == "bc") return RegisterType::BC;
    if (lower == "de") return RegisterType::DE;
    if (lower == "hl") return RegisterType::HL;
    if (lower == "sp") return RegisterType::SP;
    if (lower == "af") return RegisterType::AF;
    
    return RegisterType::A; // Default fallback
}

} // namespace GBAsm
