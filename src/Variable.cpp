#include "Variable.h"
#include <cctype>

namespace GBAsm {

bool Variable::IsHardwareRegister(const std::string& name) {
    return !name.empty() && name[0] == 'r' && name.length() > 1 && std::isupper(name[1]);
}

bool Variable::IsHighRAM(const std::string& name) {
    return !name.empty() && name[0] == 'h' && name.length() > 1 && std::isupper(name[1]);
}

std::string Variable::InferTypeFromName(const std::string& name) {
    // Check for pointer or address indicators
    if (name.find("Ptr") != std::string::npos || 
        name.find("Addr") != std::string::npos) {
        return "uint16_t";
    }
    
    // Check for word-sized variables
    if (name.find("Word") != std::string::npos) {
        return "uint16_t";
    }
    
    // Default to byte-sized
    return "uint8_t";
}

Variable Variable::CreateHardwareReg(const std::string& name) {
    Variable var;
    var.name = name;
    var.cType = "volatile uint8_t";
    var.isVolatile = true;
    var.isHardwareReg = true;
    var.isArray = false;
    var.arraySize = 0;
    var.comment = "Hardware register";
    return var;
}

Variable Variable::CreateHighRAM(const std::string& name) {
    Variable var;
    var.name = name;
    var.cType = "uint8_t";
    var.isVolatile = false;
    var.isHardwareReg = false;
    var.isArray = false;
    var.arraySize = 0;
    var.comment = "High RAM variable";
    return var;
}

Variable Variable::CreateMemoryVar(const std::string& name) {
    Variable var;
    var.name = name;
    var.cType = InferTypeFromName(name);
    var.isVolatile = false;
    var.isHardwareReg = false;
    var.isArray = false;
    var.arraySize = 0;
    var.comment = "";
    return var;
}

} // namespace GBAsm
