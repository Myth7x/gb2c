#include "Converter.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>

using namespace GBAsm;

std::string ReadTestFile(const char* filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        // If file doesn't exist, return a minimal test case
        std::cout << "  (Using minimal test case, test file not found)\n";
        return "";
    }
    
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void TestBattleCoreConversion() {
    std::cout << "Testing Battle Core conversion...\n";
    
    // Try to read the actual core.asm file
    std::string asm_code;
    try {
        asm_code = ReadTestFile("tests/core.asm");
    } catch (...) {
        try {
            asm_code = ReadTestFile("core.asm");
        } catch (...) {
            // Fall back to a minimal battle core test
            asm_code = 
                "BattleCore:\n"
                "    call SlidePlayerAndEnemySilhouettesOnScreen\n"
                "    ret\n"
                "\n"
                "SlidePlayerAndEnemySilhouettesOnScreen:\n"
                "    call LoadPlayerBackPic\n"
                "    ld a, $01\n"
                "    ld [wTextBoxID], a\n"
                "    call DisplayTextBoxID\n"
                "    ret\n"
                "\n"
                "LoadPlayerBackPic:\n"
                "    ld hl, PlayerBackPicData\n"
                "    ret\n"
                "\n"
                "DisplayTextBoxID:\n"
                "    ld a, [wTextBoxID]\n"
                "    cp $01\n"
                "    ret z\n"
                "    ret\n";
        }
    }
    
    if (asm_code.empty()) {
        asm_code = 
            "BattleCore:\n"
            "    call InitBattle\n"
            "    ret\n"
            "\n"
            "InitBattle:\n"
            "    xor a\n"
            "    ld [wBattleResult], a\n"
            "    ret\n";
    }
    
    Converter converter;
    std::string result = converter.ConvertToC(asm_code);
    
    assert(!result.empty() && "Conversion should produce output");
    
    const auto& functions = converter.GetFunctions();
    const auto& functionCalls = converter.GetFunctionCalls();
    assert(!functions.empty() && "Should detect functions");
    assert(!functionCalls.empty() && "Should detect function calls");
    
    const auto& variables = converter.GetVariables();
    
    std::cout << "  Functions detected: " << functions.size() << "\n";
    std::cout << "  Function calls detected: " << functionCalls.size() << "\n";
    std::cout << "  Variables detected: " << variables.size() << "\n";
    std::cout << "  Output size: " << result.length() << " bytes\n";
    
    // Test reference tracking
    auto funcRefs = converter.GetFunctionReferences();
    std::cout << "  Function references: " << funcRefs.size() << "\n";
    
    std::cout << "✓ Battle core test passed\n";
}

int main() {
    std::cout << "Running Battle Core Test\n";
    std::cout << "========================\n\n";
    
    try {
        TestBattleCoreConversion();
        
        std::cout << "\nBattle core test passed!\n";
        return 0;
        
    } catch (const std::exception& e) {
        std::cerr << "\n✗ Test failed: " << e.what() << "\n";
        return 1;
    }
}
