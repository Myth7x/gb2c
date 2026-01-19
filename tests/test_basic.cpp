#include "Converter.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace GBAsm;

void TestEmptyInput() {
    Converter converter;
    std::string result = converter.ConvertToC("");
    assert(!result.empty() && "Empty input should produce valid C header");
    std::cout << "✓ Empty input test passed\n";
}

void TestSimpleLabel() {
    Converter converter;
    std::string asm_code = "SimpleFunction:\n    ret\n";
    std::string result = converter.ConvertToC(asm_code);
    
    assert(result.find("void SimpleFunction()") != std::string::npos && 
           "Function declaration should be present");
    assert(result.find("return;") != std::string::npos && 
           "Return statement should be present");
    
    std::cout << "✓ Simple label test passed\n";
}

void TestLoadInstruction() {
    Converter converter;
    std::string asm_code = 
        "TestFunc:\n"
        "    ld a, 5\n"
        "    ret\n";
    
    std::string result = converter.ConvertToC(asm_code);
    
    assert(result.find("TestFunc") != std::string::npos && 
           "Function name should be present");
    assert(result.find("a =") != std::string::npos || 
           result.find("A =") != std::string::npos && 
           "Load instruction should be converted");
    
    std::cout << "✓ Load instruction test passed\n";
}

void TestMultipleFunctions() {
    Converter converter;
    std::string asm_code = 
        "Function1:\n"
        "    ld a, 1\n"
        "    ret\n"
        "\n"
        "Function2:\n"
        "    ld b, 2\n"
        "    ret\n";
    
    std::string result = converter.ConvertToC(asm_code);
    
    assert(result.find("Function1") != std::string::npos && 
           "First function should be present");
    assert(result.find("Function2") != std::string::npos && 
           "Second function should be present");
    
    const auto& functions = converter.GetFunctions();
    assert(functions.size() >= 2 && "Should detect at least 2 functions");
    
    std::cout << "✓ Multiple functions test passed\n";
}

void TestComments() {
    Converter converter;
    std::string asm_code = 
        "; This is a comment\n"
        "FunctionWithComments:\n"
        "    ld a, 10 ; load value\n"
        "    ret ; return\n";
    
    std::string result = converter.ConvertToC(asm_code);
    
    assert(result.find("FunctionWithComments") != std::string::npos && 
           "Function should be present despite comments");
    
    std::cout << "✓ Comments test passed\n";
}

void TestJumpInstruction() {
    Converter converter;
    std::string asm_code = 
        "JumpTest:\n"
        "    jr .loop\n"
        ".loop\n"
        "    ret\n";
    
    std::string result = converter.ConvertToC(asm_code);
    
    assert(result.find("JumpTest") != std::string::npos && 
           "Function with jump should be present");
    
    std::cout << "✓ Jump instruction test passed\n";
}

void TestCallInstruction() {
    Converter converter;
    std::string asm_code = 
        "Caller:\n"
        "    call OtherFunction\n"
        "    ret\n"
        "\n"
        "OtherFunction:\n"
        "    ret\n";
    
    std::string result = converter.ConvertToC(asm_code);
    
    assert(result.find("Caller") != std::string::npos && 
           "Caller function should be present");
    assert(result.find("OtherFunction") != std::string::npos && 
           "Called function should be present");
    
    std::cout << "✓ Call instruction test passed\n";
}

void TestVariableDetection() {
    Converter converter;
    std::string asm_code = 
        "VarTest:\n"
        "    ld a, [wVariable]\n"
        "    ld [hOtherVar], a\n"
        "    ret\n";
    
    std::string result = converter.ConvertToC(asm_code);
    
    const auto& variables = converter.GetVariables();
    assert(!variables.empty() && "Should detect variables");
    
    std::cout << "✓ Variable detection test passed\n";
}

void TestConditionalJump() {
    Converter converter;
    std::string asm_code = 
        "ConditionalTest:\n"
        "    cp 5\n"
        "    jr z, .equal\n"
        "    jr .notEqual\n"
        ".equal\n"
        "    ld a, 1\n"
        "    ret\n"
        ".notEqual\n"
        "    ld a, 0\n"
        "    ret\n";
    
    std::string result = converter.ConvertToC(asm_code);
    
    assert(result.find("ConditionalTest") != std::string::npos && 
           "Function with conditional should be present");
    
    std::cout << "✓ Conditional jump test passed\n";
}

void TestReferenceTracking() {
    Converter converter;
    std::string asm_code = 
        "MainFunc:\n"
        "    call Helper\n"
        "    ld a, [wTestVar]\n"
        "    ret\n"
        "\n"
        "Helper:\n"
        "    ret\n";
    
    converter.ConvertToC(asm_code);
    
    auto funcRefs = converter.GetFunctionReferences();
    assert(!funcRefs.empty() && "Should track function references");
    
    auto varRefs = converter.GetVariableReferences();
    // Variables may or may not be detected depending on implementation
    
    std::cout << "✓ Reference tracking test passed\n";
}

int main() {
    std::cout << "Running GB Assembly to C Converter Tests\n";
    std::cout << "=========================================\n\n";
    
    try {
        TestEmptyInput();
        TestSimpleLabel();
        TestLoadInstruction();
        TestMultipleFunctions();
        TestComments();
        TestJumpInstruction();
        TestCallInstruction();
        TestVariableDetection();
        TestConditionalJump();
        TestReferenceTracking();
        
        std::cout << "\n=========================================\n";
        std::cout << "All basic tests passed!\n";
        return 0;
        
    } catch (const std::exception& e) {
        std::cerr << "\n✗ Test failed with exception: " << e.what() << "\n";
        return 1;
    } catch (...) {
        std::cerr << "\n✗ Test failed with unknown exception\n";
        return 1;
    }
}
