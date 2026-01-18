#include "CGenerator.h"
#include <sstream>
#include <algorithm>
#include <cctype>

namespace GBAsm {

CGenerator::CGenerator() = default;
CGenerator::~CGenerator() = default;

std::string CGenerator::Generate(const Function& func, 
                                const std::map<std::string, Variable>& variables) {
    std::ostringstream output;
    
    output << GenerateFunctionSignature(func) << " {\n";
    output << GenerateLocalVariables(func, variables);
    output << GenerateFunctionBody(func, variables);
    output << "}\n";
    
    return output.str();
}

std::string CGenerator::GenerateVariableDeclarations(
    const std::map<std::string, Variable>& variables) {
    std::ostringstream output;
    
    for (const auto& [name, var] : variables) {
        if (var.isVolatile) {
            output << "volatile ";
        }
        output << var.cType << " " << name;
        if (var.isArray) {
            output << "[" << var.arraySize << "]";
        }
        output << ";\n";
    }
    
    return output.str();
}

std::string CGenerator::GenerateFunctionSignature(const Function& func) {
    std::ostringstream sig;
    sig << func.returnType << " " << func.name << "(";
    
    for (size_t i = 0; i < func.parameters.size(); i++) {
        if (i > 0) sig << ", ";
        sig << func.parameters[i];
    }
    
    sig << ")";
    return sig.str();
}

std::string CGenerator::GenerateLocalVariables(const Function& func,
                                              const std::map<std::string, Variable>& variables) {
    std::ostringstream output;
    

    output << "    uint8_t a = 0, b = 0, c = 0, d = 0, e = 0, h = 0, l = 0;\n";
    output << "    uint16_t bc = 0, de = 0, hl = 0, sp = 0;\n";
    output << "    bool carry = false, zero = false;\n\n";
    
    return output.str();
}

std::string CGenerator::GenerateFunctionBody(const Function& func,
                                            const std::map<std::string, Variable>& variables) {
    std::ostringstream output;
    RegisterState state;
    
    for (const auto& inst : func.instructions) {
        if (inst.type == InstructionType::Comment) {
            if (!inst.comment.empty()) {
                output << "    // " << inst.comment << "\n";
            }
            continue;
        }
        
        if (inst.type == InstructionType::Label || inst.type == InstructionType::Directive) {
            continue;
        }
        
        std::string translated = TranslateInstruction(inst, state, variables);
        if (!translated.empty()) {
            output << "    " << translated;
            if (!inst.comment.empty()) {
                output << " // " << inst.comment;
            }
            output << "\n";
        }
    }
    
    return output.str();
}

std::string CGenerator::TranslateInstruction(const Instruction& inst, 
                                            RegisterState& state,
                                            const std::map<std::string, Variable>& variables) {
    switch (inst.type) {
        case InstructionType::Load:
            return TranslateLoad(inst, state, variables);
        case InstructionType::Arithmetic:
            return TranslateArithmetic(inst, state, variables);
        case InstructionType::Bit:
            return TranslateBitOp(inst, state, variables);
        case InstructionType::Jump:
            return TranslateJump(inst, state, variables);
        case InstructionType::Call:
            return TranslateCall(inst, state, variables);
        case InstructionType::Return:
            return TranslateReturn(inst, state, variables);
        case InstructionType::Stack:
            return TranslateStack(inst, state, variables);
        case InstructionType::Rotate:
        case InstructionType::Shift:
            return TranslateRotateShift(inst, state, variables);
        case InstructionType::Misc:
            return TranslateMisc(inst, state, variables);
        default:
            return "/* " + inst.mnemonic + " */";
    }
}

std::string CGenerator::TranslateLoad(const Instruction& inst, 
                                     RegisterState& state,
                                     const std::map<std::string, Variable>& variables) {
    if (inst.operands.size() < 2) return "";
    
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    std::string dest = TranslateOperand(inst.operands[0], state, variables);
    std::string src = TranslateOperand(inst.operands[1], state, variables);
    
    // Handle special load variants
    if (mnemonic == "ldh") {
        // LDH: Load to/from High RAM ($FF00+n)
        return dest + " = " + src + "; // LDH (High RAM)";
    } else if (mnemonic == "ldi" || mnemonic.find("hl+") != std::string::npos || 
               mnemonic.find("hli") != std::string::npos) {
        // LDI: Load and increment HL
        std::string result = dest + " = " + src + ";";
        if (src.find("hl") != std::string::npos || dest.find("hl") != std::string::npos) {
            result += " hl++; // LDI (HL increment)";
        }
        return result;
    } else if (mnemonic == "ldd" || mnemonic.find("hl-") != std::string::npos || 
               mnemonic.find("hld") != std::string::npos) {
        // LDD: Load and decrement HL
        std::string result = dest + " = " + src + ";";
        if (src.find("hl") != std::string::npos || dest.find("hl") != std::string::npos) {
            result += " hl--; // LDD (HL decrement)";
        }
        return result;
    }
    
    // Standard LD instruction
    return dest + " = " + src + ";";
}

std::string CGenerator::TranslateArithmetic(const Instruction& inst,
                                           RegisterState& state,
                                           const std::map<std::string, Variable>& variables) {
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    // 8-bit arithmetic operations
    if (mnemonic == "add") {
        if (inst.operands.size() == 1) {
            // ADD A, r8 (implicit A destination)
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "a = (uint8_t)(a + " + src + "); // TODO: set flags";
        } else if (inst.operands.size() >= 2) {
            std::string dest = TranslateOperand(inst.operands[0], state, variables);
            std::string src = TranslateOperand(inst.operands[1], state, variables);
            if (dest == "hl" || dest == "sp") {
                // 16-bit ADD
                return dest + " = (uint16_t)(" + dest + " + " + src + "); // TODO: set flags";
            }
            return dest + " = (uint8_t)(" + dest + " + " + src + "); // TODO: set flags";
        }
    } else if (mnemonic == "adc") {
        // ADD with carry
        if (inst.operands.size() == 1) {
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "a = (uint8_t)(a + " + src + " + (carry ? 1 : 0)); // TODO: set flags";
        } else if (inst.operands.size() >= 2) {
            std::string dest = TranslateOperand(inst.operands[0], state, variables);
            std::string src = TranslateOperand(inst.operands[1], state, variables);
            return dest + " = (uint8_t)(" + dest + " + " + src + " + (carry ? 1 : 0)); // TODO: set flags";
        }
    } else if (mnemonic == "sub") {
        if (inst.operands.size() == 1) {
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "a = (uint8_t)(a - " + src + "); // TODO: set flags";
        } else if (inst.operands.size() >= 2) {
            std::string dest = TranslateOperand(inst.operands[0], state, variables);
            std::string src = TranslateOperand(inst.operands[1], state, variables);
            return dest + " = (uint8_t)(" + dest + " - " + src + "); // TODO: set flags";
        }
    } else if (mnemonic == "sbc") {
        // SUB with carry
        if (inst.operands.size() == 1) {
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "a = (uint8_t)(a - " + src + " - (carry ? 1 : 0)); // TODO: set flags";
        } else if (inst.operands.size() >= 2) {
            std::string dest = TranslateOperand(inst.operands[0], state, variables);
            std::string src = TranslateOperand(inst.operands[1], state, variables);
            return dest + " = (uint8_t)(" + dest + " - " + src + " - (carry ? 1 : 0)); // TODO: set flags";
        }
    } else if (mnemonic == "inc") {
        if (inst.operands.empty()) return "";
        std::string operand = TranslateOperand(inst.operands[0], state, variables);
        return operand + "++; // TODO: set flags";
    } else if (mnemonic == "dec") {
        if (inst.operands.empty()) return "";
        std::string operand = TranslateOperand(inst.operands[0], state, variables);
        return operand + "--; // TODO: set flags";
    } else if (mnemonic == "and") {
        if (inst.operands.size() == 1) {
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "a &= " + src + "; zero = (a == 0); // TODO: set other flags";
        } else if (inst.operands.size() >= 2) {
            std::string dest = TranslateOperand(inst.operands[0], state, variables);
            std::string src = TranslateOperand(inst.operands[1], state, variables);
            return dest + " &= " + src + "; zero = (" + dest + " == 0); // TODO: set other flags";
        }
    } else if (mnemonic == "or") {
        if (inst.operands.size() == 1) {
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "a |= " + src + "; zero = (a == 0); // TODO: set other flags";
        } else if (inst.operands.size() >= 2) {
            std::string dest = TranslateOperand(inst.operands[0], state, variables);
            std::string src = TranslateOperand(inst.operands[1], state, variables);
            return dest + " |= " + src + "; zero = (" + dest + " == 0); // TODO: set other flags";
        }
    } else if (mnemonic == "xor") {
        if (inst.operands.size() == 1) {
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "a ^= " + src + "; zero = (a == 0); carry = false; // XOR clears carry";
        } else if (inst.operands.size() >= 2) {
            std::string dest = TranslateOperand(inst.operands[0], state, variables);
            std::string src = TranslateOperand(inst.operands[1], state, variables);
            return dest + " ^= " + src + "; zero = (" + dest + " == 0); carry = false; // XOR clears carry";
        }
    } else if (mnemonic == "cp") {
        // Compare (SUB but don't store result)
        if (inst.operands.size() == 1) {
            std::string src = TranslateOperand(inst.operands[0], state, variables);
            return "zero = (a == " + src + "); carry = (a < " + src + "); // Compare";
        } else if (inst.operands.size() >= 2) {
            std::string op1 = TranslateOperand(inst.operands[0], state, variables);
            std::string op2 = TranslateOperand(inst.operands[1], state, variables);
            return "zero = (" + op1 + " == " + op2 + "); carry = (" + op1 + " < " + op2 + "); // Compare";
        }
    } else if (mnemonic == "cpl") {
        // Complement A (flip all bits)
        return "a = ~a; // Complement";
    } else if (mnemonic == "neg") {
        // Negate A (two's complement)
        return "a = (uint8_t)(-a); // TODO: set flags";
    } else if (mnemonic == "daa") {
        // Decimal Adjust Accumulator (for BCD arithmetic)
        return "/* DAA - Decimal Adjust A (BCD) - TODO: implement */";
    } else if (mnemonic == "scf") {
        // Set Carry Flag
        return "carry = true; // Set Carry Flag";
    } else if (mnemonic == "ccf") {
        // Complement Carry Flag
        return "carry = !carry; // Complement Carry Flag";
    }
    
    return "/* " + inst.mnemonic + " */";
}

std::string CGenerator::TranslateBitOp(const Instruction& inst,
                                      RegisterState& state,
                                      const std::map<std::string, Variable>& variables) {
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    if (inst.operands.size() < 2) return "";
    
    std::string bit = TranslateOperand(inst.operands[0], state, variables);
    std::string operand = TranslateOperand(inst.operands[1], state, variables);
    
    if (mnemonic == "bit") {
        return "zero = ((" + operand + " & (1 << " + bit + ")) == 0);";
    } else if (mnemonic == "set") {
        return operand + " |= (1 << " + bit + ");";
    } else if (mnemonic == "res") {
        return operand + " &= ~(1 << " + bit + ");";
    }
    
    return "/* " + inst.mnemonic + " */";
}

std::string CGenerator::TranslateJump(const Instruction& inst,
                                     RegisterState& state,
                                     const std::map<std::string, Variable>& variables) {
    if (inst.operands.empty()) return "";
    
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    // Check for conditional suffixes
    bool hasCondition = false;
    std::string condition;
    
    // Check for Z/NZ (Zero flag)
    if (mnemonic.find("z") != std::string::npos) {
        if (mnemonic.find("nz") != std::string::npos) {
            condition = "!zero";
            hasCondition = true;
        } else {
            condition = "zero";
            hasCondition = true;
        }
    }
    // Check for C/NC (Carry flag)
    else if (mnemonic.find("c") != std::string::npos) {
        if (mnemonic.find("nc") != std::string::npos) {
            condition = "!carry";
            hasCondition = true;
        } else {
            condition = "carry";
            hasCondition = true;
        }
    }
    
    std::string target = TranslateOperand(inst.operands[0], state, variables);
    
    // Determine if it's JP or JR (both handle the same in C)
    if (mnemonic.find("jp") == 0 || mnemonic.find("jr") == 0) {
        if (hasCondition) {
            return "if (" + condition + ") goto " + target + ";";
        } else {
            return "goto " + target + ";";
        }
    }
    
    return "/* " + inst.mnemonic + " */";
}

std::string CGenerator::TranslateCall(const Instruction& inst,
                                     RegisterState& state,
                                     const std::map<std::string, Variable>& variables) {
    if (inst.operands.empty()) return "";
    
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    // Check for conditional call
    std::string condition;
    bool hasCondition = false;
    
    if (mnemonic.find("z") != std::string::npos) {
        if (mnemonic.find("nz") != std::string::npos) {
            condition = "!zero";
            hasCondition = true;
        } else {
            condition = "zero";
            hasCondition = true;
        }
    } else if (mnemonic.find("c") != std::string::npos) {
        if (mnemonic.find("nc") != std::string::npos) {
            condition = "!carry";
            hasCondition = true;
        } else {
            condition = "carry";
            hasCondition = true;
        }
    }
    
    std::string target = TranslateOperand(inst.operands[0], state, variables);
    
    if (hasCondition) {
        return "if (" + condition + ") " + target + "();";
    } else {
        return target + "();";
    }
}

std::string CGenerator::TranslateReturn(const Instruction& inst,
                                       RegisterState& state,
                                       const std::map<std::string, Variable>& variables) {
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    // Check for conditional return
    std::string condition;
    bool hasCondition = false;
    
    if (mnemonic.find("z") != std::string::npos) {
        if (mnemonic.find("nz") != std::string::npos) {
            condition = "!zero";
            hasCondition = true;
        } else {
            condition = "zero";
            hasCondition = true;
        }
    } else if (mnemonic.find("c") != std::string::npos) {
        if (mnemonic.find("nc") != std::string::npos) {
            condition = "!carry";
            hasCondition = true;
        } else {
            condition = "carry";
            hasCondition = true;
        }
    }
    
    // RETI is Return from Interrupt
    if (mnemonic == "reti") {
        return "/* RETI - Return from Interrupt */ return;";
    }
    
    if (hasCondition) {
        return "if (" + condition + ") return;";
    } else {
        return "return;";
    }
}

std::string CGenerator::TranslateStack(const Instruction& inst,
                                      RegisterState& state,
                                      const std::map<std::string, Variable>& variables) {
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    if (mnemonic == "push") {
        if (inst.operands.empty()) return "";
        std::string operand = TranslateOperand(inst.operands[0], state, variables);
        return "/* PUSH " + operand + " - TODO: implement stack */";
    } else if (mnemonic == "pop") {
        if (inst.operands.empty()) return "";
        std::string operand = TranslateOperand(inst.operands[0], state, variables);
        return "/* POP " + operand + " - TODO: implement stack */";
    }
    
    return "/* " + inst.mnemonic + " */";
}

std::string CGenerator::TranslateRotateShift(const Instruction& inst,
                                             RegisterState& state,
                                             const std::map<std::string, Variable>& variables) {
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    if (inst.operands.empty()) return "";
    std::string operand = TranslateOperand(inst.operands[0], state, variables);
    
    // Rotate instructions
    if (mnemonic == "rlca" || mnemonic == "rlc") {
        // Rotate Left Circular
        return operand + " = ((uint8_t)(" + operand + " << 1) | (" + operand + " >> 7)); // RLC";
    } else if (mnemonic == "rrca" || mnemonic == "rrc") {
        // Rotate Right Circular
        return operand + " = ((uint8_t)(" + operand + " >> 1) | (" + operand + " << 7)); // RRC";
    } else if (mnemonic == "rla" || mnemonic == "rl") {
        // Rotate Left through Carry
        return "{ uint8_t temp = " + operand + "; " + operand + " = (uint8_t)((" + operand + " << 1) | (carry ? 1 : 0)); carry = (temp & 0x80) != 0; } // RL";
    } else if (mnemonic == "rra" || mnemonic == "rr") {
        // Rotate Right through Carry
        return "{ uint8_t temp = " + operand + "; " + operand + " = (uint8_t)((" + operand + " >> 1) | (carry ? 0x80 : 0)); carry = (temp & 1) != 0; } // RR";
    }
    // Shift instructions
    else if (mnemonic == "sla") {
        // Shift Left Arithmetic
        return "carry = (" + operand + " & 0x80) != 0; " + operand + " = (uint8_t)(" + operand + " << 1); // SLA";
    } else if (mnemonic == "sra") {
        // Shift Right Arithmetic (preserve sign bit)
        return "carry = (" + operand + " & 1) != 0; " + operand + " = (uint8_t)((" + operand + " >> 1) | (" + operand + " & 0x80)); // SRA";
    } else if (mnemonic == "srl") {
        // Shift Right Logical
        return "carry = (" + operand + " & 1) != 0; " + operand + " = (uint8_t)(" + operand + " >> 1); // SRL";
    } else if (mnemonic == "swap") {
        // Swap nibbles
        return operand + " = (uint8_t)((" + operand + " >> 4) | (" + operand + " << 4)); // SWAP";
    }
    
    return "/* " + inst.mnemonic + " */";
}

std::string CGenerator::TranslateMisc(const Instruction& inst,
                                     RegisterState& state,
                                     const std::map<std::string, Variable>& variables) {
    std::string mnemonic = inst.mnemonic;
    std::transform(mnemonic.begin(), mnemonic.end(), mnemonic.begin(), ::tolower);
    
    if (mnemonic == "nop") {
        return "// NOP";
    } else if (mnemonic == "halt") {
        return "/* HALT - TODO: implement */";
    } else if (mnemonic == "stop") {
        return "/* STOP - TODO: implement */";
    } else if (mnemonic == "di") {
        // Disable Interrupts
        return "/* DI - Disable Interrupts */";
    } else if (mnemonic == "ei") {
        // Enable Interrupts
        return "/* EI - Enable Interrupts */";
    } else if (mnemonic == "rst") {
        // Restart (call to fixed address)
        if (!inst.operands.empty()) {
            std::string addr = TranslateOperand(inst.operands[0], state, variables);
            return "/* RST " + addr + " - TODO: implement */";
        }
        return "/* RST - TODO: implement */";
    }
    
    return "/* " + inst.mnemonic + " */";
}

std::string CGenerator::TranslateOperand(const Operand& operand,
                                        RegisterState& state,
                                        const std::map<std::string, Variable>& variables) {
    switch (operand.type) {
        case OperandType::Register:
            return GetRegisterName(operand.reg);
        case OperandType::Immediate:
            return operand.value;
        case OperandType::Memory:
            if (operand.isIndirect) {
                return "*" + operand.value;
            }
            return operand.value;
        case OperandType::Label:
            return operand.value;
        case OperandType::HardwareReg:
        case OperandType::HighRAM:
            return operand.value;
        default:
            return operand.value;
    }
}

std::string CGenerator::GetRegisterName(RegisterType reg) {
    switch (reg) {
        case RegisterType::A: return "a";
        case RegisterType::B: return "b";
        case RegisterType::C: return "c";
        case RegisterType::D: return "d";
        case RegisterType::E: return "e";
        case RegisterType::H: return "h";
        case RegisterType::L: return "l";
        case RegisterType::BC: return "bc";
        case RegisterType::DE: return "de";
        case RegisterType::HL: return "hl";
        case RegisterType::SP: return "sp";
        case RegisterType::AF: return "af";
        default: return "a";
    }
}

} // namespace GBAsm
