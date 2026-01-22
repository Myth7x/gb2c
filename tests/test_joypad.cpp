#include "Converter.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>

using namespace GBAsm;

std::string ReadTestFile(const char* filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error(std::string("Failed to open test file: ") + filename);
    }
    
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void TestJoypadConversion() {
    std::cout << "Testing Joypad conversion...\n";
    
    // Create a minimal joypad test case
    std::string asm_code = 
        "Joypad:\n"
        "    ld a, [hJoyHeld]\n"
        "    and a\n"
        "    jr z, .noInput\n"
        "    ret\n"
        ".noInput\n"
        "    xor a\n"
        "    ret\n";
    
    Converter converter;
    std::string result = converter.ConvertToC(asm_code);
    
    assert(!result.empty() && "Conversion should produce output");
    assert(result.find("Joypad") != std::string::npos && 
           "Function name should be present");
    
    const auto& functions = converter.GetFunctions();
    const auto& functionCalls = converter.GetFunctionCalls();
    assert(!functions.empty() && "Should detect at least one function");
    
    std::cout << "  Functions detected: " << functions.size() << "\n";
    std::cout << "  Function calls detected: " << functionCalls.size() << "\n";
    std::cout << "  Output size: " << result.length() << " bytes\n";
    std::cout << "✓ Joypad test passed\n";
}

int main() {
    std::cout << "Running Joypad Test\n";
    std::cout << "===================\n\n";
    
    try {
        TestJoypadConversion();
        
        std::cout << "\nJoypad test passed!\n";
        return 0;
        
    } catch (const std::exception& e) {
        std::cerr << "\n✗ Test failed: " << e.what() << "\n";
        return 1;
    }
}
