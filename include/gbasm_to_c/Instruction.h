#pragma once

#include <string>
#include <vector>
#include <cstdint>

namespace GBAsm {

enum class RegisterType {
    A, B, C, D, E, H, L,
    BC, DE, HL, SP,
    AF
};

enum class OperandType {
    Register,
    Immediate,
    Memory,
    Label,
    HardwareReg,
    HighRAM
};

struct Operand {
    OperandType type;
    RegisterType reg;
    std::string value;
    bool isIndirect;
    int immediateValue;
    
    // Helper methods
    bool IsRegister() const { return type == OperandType::Register; }
    bool IsImmediate() const { return type == OperandType::Immediate; }
    bool IsMemory() const { return type == OperandType::Memory; }
    bool IsLabel() const { return type == OperandType::Label; }
    bool IsHardwareReg() const { return type == OperandType::HardwareReg; }
    bool IsHighRAM() const { return type == OperandType::HighRAM; }
};

enum class InstructionType {
    Load,
    Arithmetic,
    Bit,
    Jump,
    Call,
    Return,
    Stack,
    Rotate,
    Shift,
    Misc,
    Directive,
    Macro,
    Label,
    Comment
};

struct Instruction {
    InstructionType type;
    std::string mnemonic;
    std::vector<Operand> operands;
    std::string label;
    std::string comment;
    int lineNumber;
    
    bool isConditional;
    std::string condition;
    
    // Static helper methods for instruction classification
    static InstructionType ClassifyMnemonic(const std::string& mnemonic);
    static RegisterType ParseRegisterName(const std::string& regName);
    static bool IsRegisterName(const std::string& token);
    static bool IsMacro(const std::string& mnemonic);
    
    // Helper methods for instruction analysis
    bool IsLoad() const { return type == InstructionType::Load; }
    bool IsArithmetic() const { return type == InstructionType::Arithmetic; }
    bool IsJump() const { return type == InstructionType::Jump; }
    bool IsCall() const { return type == InstructionType::Call; }
    bool IsReturn() const { return type == InstructionType::Return; }
    bool IsMacroCall() const { return type == InstructionType::Macro; }
    bool IsExecutable() const { return type != InstructionType::Comment && 
                                       type != InstructionType::Label && 
                                       type != InstructionType::Directive; }
};

} // namespace GBAsm
