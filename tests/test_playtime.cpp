#include "Converter.h"
#include <iostream>
#include <cassert>

using namespace GBAsm;

void TestPlayTimeConversion() {
    std::cout << "Testing PlayTime conversion...\n";
    
    std::string asm_code = 
        "UpdatePlayTime:\n"
        "    ld a, [wPlayTimeSeconds]\n"
        "    inc a\n"
        "    cp 60\n"
        "    jr c, .storeSeconds\n"
        "    xor a\n"
        "    ld [wPlayTimeSeconds], a\n"
        "    ld a, [wPlayTimeMinutes]\n"
        "    inc a\n"
        "    cp 60\n"
        "    jr c, .storeMinutes\n"
        "    xor a\n"
        "    ld [wPlayTimeMinutes], a\n"
        "    ld a, [wPlayTimeHours]\n"
        "    inc a\n"
        "    ld [wPlayTimeHours], a\n"
        "    ret\n"
        ".storeMinutes\n"
        "    ld [wPlayTimeMinutes], a\n"
        "    ret\n"
        ".storeSeconds\n"
        "    ld [wPlayTimeSeconds], a\n"
        "    ret\n";
    
    Converter converter;
    std::string result = converter.ConvertToC(asm_code);
    
    assert(!result.empty() && "Conversion should produce output");
    assert(result.find("UpdatePlayTime") != std::string::npos && 
           "Function name should be present");
    
    const auto& functions = converter.GetFunctions();
    const auto& functionCalls = converter.GetFunctionCalls();
    assert(functions.size() >= 1 && "Should detect main function");
    
    const auto& variables = converter.GetVariables();
    assert(variables.size() >= 3 && "Should detect time variables");
    
    std::cout << "  Functions detected: " << functions.size() << "\n";
    std::cout << "  Function calls detected: " << functionCalls.size() << "\n";
    std::cout << "  Variables detected: " << variables.size() << "\n";
    std::cout << "  Output size: " << result.length() << " bytes\n";
    std::cout << "✓ PlayTime test passed\n";
}

int main() {
    std::cout << "Running PlayTime Test\n";
    std::cout << "=====================\n\n";
    
    try {
        TestPlayTimeConversion();
        
        std::cout << "\nPlayTime test passed!\n";
        return 0;
        
    } catch (const std::exception& e) {
        std::cerr << "\n✗ Test failed: " << e.what() << "\n";
        return 1;
    }
}
