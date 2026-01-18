#pragma once

#include <string>

namespace GBAsm {

struct Variable {
    std::string name;
    std::string cType;
    bool isVolatile;
    bool isHardwareReg;
    bool isArray;
    int arraySize;
    std::string comment;
    
    // Static helper methods for variable analysis
    static bool IsHardwareRegister(const std::string& name);
    static bool IsHighRAM(const std::string& name);
    static std::string InferTypeFromName(const std::string& name);
    static Variable CreateHardwareReg(const std::string& name);
    static Variable CreateHighRAM(const std::string& name);
    static Variable CreateMemoryVar(const std::string& name);
};

} // namespace GBAsm
