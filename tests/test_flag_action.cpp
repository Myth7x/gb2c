#include "Converter.h"
#include <iostream>
#include <cassert>

using namespace GBAsm;

void TestFlagActionConversion() {
    std::cout << "Testing FlagAction conversion...\n";
    
    std::string asm_code = 
        "FlagAction:\n"
        "    ld hl, wFlags\n"
        "    ld a, [wFlagNumber]\n"
        "    ld c, a\n"
        "    ld b, $0\n"
        "    srl c\n"
        "    jr nc, .noCarry\n"
        "    set 7, b\n"
        ".noCarry\n"
        "    srl c\n"
        "    jr nc, .noCarry2\n"
        "    set 6, b\n"
        ".noCarry2\n"
        "    srl c\n"
        "    jr nc, .done\n"
        "    set 5, b\n"
        ".done\n"
        "    add hl, bc\n"
        "    ld a, [hl]\n"
        "    ret\n"
        "\n"
        "SetFlag:\n"
        "    call FlagAction\n"
        "    or b\n"
        "    ld [hl], a\n"
        "    ret\n"
        "\n"
        "ResetFlag:\n"
        "    call FlagAction\n"
        "    ld b, a\n"
        "    ld a, $FF\n"
        "    xor b\n"
        "    ld b, a\n"
        "    ld a, [hl]\n"
        "    and b\n"
        "    ld [hl], a\n"
        "    ret\n";
    
    Converter converter;
    std::string result = converter.ConvertToC(asm_code);
    
    assert(!result.empty() && "Conversion should produce output");
    assert(result.find("FlagAction") != std::string::npos && 
           "FlagAction function should be present");
    assert(result.find("SetFlag") != std::string::npos && 
           "SetFlag function should be present");
    assert(result.find("ResetFlag") != std::string::npos && 
           "ResetFlag function should be present");
    
    const auto& functions = converter.GetFunctions();
    const auto& functionCalls = converter.GetFunctionCalls();
    assert(functions.size() >= 3 && "Should detect at least 3 functions");
    
    // Check for function calls
    auto funcRefs = converter.GetFunctionReferences();
    assert(!funcRefs.empty() && "Should track function references");
    
    std::cout << "  Functions detected: " << functions.size() << "\n";
    std::cout << "  Function calls detected: " << functionCalls.size() << "\n";
    std::cout << "  Function references: " << funcRefs.size() << "\n";
    std::cout << "  Output size: " << result.length() << " bytes\n";
    std::cout << "✓ FlagAction test passed\n";
}

int main() {
    std::cout << "Running FlagAction Test\n";
    std::cout << "=======================\n\n";
    
    try {
        TestFlagActionConversion();
        
        std::cout << "\nFlagAction test passed!\n";
        return 0;
        
    } catch (const std::exception& e) {
        std::cerr << "\n✗ Test failed: " << e.what() << "\n";
        return 1;
    }
}
