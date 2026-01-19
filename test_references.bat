@echo off
REM Test script for reference tracking functionality
REM Tests the new -r, -f, and -var flags

echo ===================================
echo GB Assembly to C - Reference Tests
echo ===================================
echo.

REM Test 1: Normal conversion with verbose output
echo [TEST 1] Normal conversion with verbose output
echo Command: gbasm2c.exe -v tests\core.asm
echo.
.\build\Release\gbasm2c.exe -v tests\core.asm
echo.
echo.

REM Test 2: Show function references only
echo [TEST 2] Function references only
echo Command: gbasm2c.exe -f tests\core.asm
echo.
.\build\Release\gbasm2c.exe -f tests\core.asm > test_output_functions.txt
echo Output written to: test_output_functions.txt
type test_output_functions.txt | findstr /C:"Function:" /C:"Called From" /C:"Calls"
echo.
echo.

REM Test 3: Show variable references only
echo [TEST 3] Variable references only
echo Command: gbasm2c.exe -var tests\core.asm
echo.
.\build\Release\gbasm2c.exe -var tests\core.asm > test_output_variables.txt
echo Output written to: test_output_variables.txt
type test_output_variables.txt | findstr /C:"Variable:" /C:"Type:" /C:"Used In"
echo.
echo.

REM Test 4: Show all references (functions + variables)
echo [TEST 4] Complete reference analysis
echo Command: gbasm2c.exe -r tests\core.asm
echo.
.\build\Release\gbasm2c.exe -r tests\core.asm > test_output_all.txt
echo Output written to: test_output_all.txt
echo First 50 lines of output:
type test_output_all.txt | more /E +1
echo.
echo.

REM Test 5: Test with ram.asm file
echo [TEST 5] Test with ram.asm (macro templates)
echo Command: gbasm2c.exe -f tests\ram.asm
echo.
.\build\Release\gbasm2c.exe -f tests\ram.asm > test_output_ram.txt
echo Output written to: test_output_ram.txt
type test_output_ram.txt | findstr /C:"Function:" /C:"Total Functions"
echo.
echo.

REM Test 6: Test library API functionality (compile test)
echo [TEST 6] Verify library API compiles correctly
echo Checking build artifacts...
if exist "build\Release\gbasm_to_c.lib" (
    echo [PASS] gbasm_to_c.lib exists
) else (
    echo [FAIL] gbasm_to_c.lib not found
)

if exist "build\Release\gbasm2c.exe" (
    echo [PASS] gbasm2c.exe exists
) else (
    echo [FAIL] gbasm2c.exe not found
)
echo.
echo.

REM Test 7: Output file verification
echo [TEST 7] Verify C output file was created
if exist "output\core.c" (
    echo [PASS] output\core.c exists
    for %%A in (output\core.c) do echo File size: %%~zA bytes
) else (
    echo [FAIL] output\core.c not found
)
echo.
echo.

echo ===================================
echo Test Summary
echo ===================================
echo Test artifacts created:
echo - test_output_functions.txt
echo - test_output_variables.txt
echo - test_output_all.txt
echo - test_output_ram.txt
echo - output\core.c
echo.
echo All tests completed!
echo.
pause
