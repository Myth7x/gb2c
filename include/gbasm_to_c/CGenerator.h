#pragma once

#include "Instruction.h"
#include "Function.h"
#include "Variable.h"
#include <string>
#include <map>
#include <vector>

namespace GBAsm {

struct RegisterState {
    std::map<std::string, std::string> values;
    bool carryFlag;
    bool zeroFlag;
};

class CGenerator {
public:
    CGenerator();
    ~CGenerator();
    
    std::string Generate(const Function& func, const std::map<std::string, Variable>& variables);
    std::string GenerateVariableDeclarations(const std::map<std::string, Variable>& variables);
    std::string GenerateFunctionSignature(const Function& func);
    
private:
    std::string GenerateLocalVariables(const Function& func, const std::map<std::string, Variable>& variables);
    std::string GenerateFunctionBody(const Function& func, const std::map<std::string, Variable>& variables);
    
    std::string TranslateInstruction(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateLoad(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateArithmetic(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateBitOp(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateJump(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateCall(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateReturn(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateStack(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateRotateShift(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateMisc(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string TranslateMacroCall(const Instruction& inst, RegisterState& state, const std::map<std::string, Variable>& variables);
    
    std::string TranslateOperand(const Operand& operand, RegisterState& state, const std::map<std::string, Variable>& variables);
    std::string GetRegisterName(RegisterType reg);
};

} // namespace GBAsm
