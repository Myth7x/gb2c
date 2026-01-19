#!/usr/bin/env pwsh
# Test script for reference tracking functionality
# Tests the new -r, -f, and -var flags

Write-Host "===================================" -ForegroundColor Cyan
Write-Host "GB Assembly to C - Reference Tests" -ForegroundColor Cyan
Write-Host "===================================" -ForegroundColor Cyan
Write-Host ""

# Test 1: Normal conversion with verbose output
Write-Host "[TEST 1] Normal conversion with verbose output" -ForegroundColor Yellow
Write-Host "Command: gbasm2c.exe -v tests\core.asm" -ForegroundColor Gray
Write-Host ""
& .\build\Release\gbasm2c.exe -v tests\core.asm
Write-Host ""
Write-Host ""

# Test 2: Show function references only
Write-Host "[TEST 2] Function references only" -ForegroundColor Yellow
Write-Host "Command: gbasm2c.exe -f tests\core.asm" -ForegroundColor Gray
Write-Host ""
& .\build\Release\gbasm2c.exe -f tests\core.asm | Out-File -FilePath test_output_functions.txt
Write-Host "Output written to: test_output_functions.txt" -ForegroundColor Green
Get-Content test_output_functions.txt | Select-String -Pattern "Function:|Called From|Calls" | Select-Object -First 20
Write-Host ""
Write-Host ""

# Test 3: Show variable references only
Write-Host "[TEST 3] Variable references only" -ForegroundColor Yellow
Write-Host "Command: gbasm2c.exe -var tests\core.asm" -ForegroundColor Gray
Write-Host ""
& .\build\Release\gbasm2c.exe -var tests\core.asm | Out-File -FilePath test_output_variables.txt
Write-Host "Output written to: test_output_variables.txt" -ForegroundColor Green
Get-Content test_output_variables.txt | Select-String -Pattern "Variable:|Type:|Used In" | Select-Object -First 20
Write-Host ""
Write-Host ""

# Test 4: Show all references (functions + variables)
Write-Host "[TEST 4] Complete reference analysis" -ForegroundColor Yellow
Write-Host "Command: gbasm2c.exe -r tests\core.asm" -ForegroundColor Gray
Write-Host ""
& .\build\Release\gbasm2c.exe -r tests\core.asm | Out-File -FilePath test_output_all.txt
Write-Host "Output written to: test_output_all.txt" -ForegroundColor Green
Write-Host "First 50 lines of output:" -ForegroundColor Gray
Get-Content test_output_all.txt | Select-Object -First 50
Write-Host ""
Write-Host ""

# Test 5: Test with ram.asm file
Write-Host "[TEST 5] Test with ram.asm (macro templates)" -ForegroundColor Yellow
Write-Host "Command: gbasm2c.exe -f tests\ram.asm" -ForegroundColor Gray
Write-Host ""
& .\build\Release\gbasm2c.exe -f tests\ram.asm | Out-File -FilePath test_output_ram.txt
Write-Host "Output written to: test_output_ram.txt" -ForegroundColor Green
Get-Content test_output_ram.txt | Select-String -Pattern "Function:|Total Functions"
Write-Host ""
Write-Host ""

# Test 6: Test library API functionality (compile test)
Write-Host "[TEST 6] Verify library API compiles correctly" -ForegroundColor Yellow
Write-Host "Checking build artifacts..." -ForegroundColor Gray

if (Test-Path "build\Release\gbasm_to_c.lib") {
    Write-Host "[PASS] gbasm_to_c.lib exists" -ForegroundColor Green
} else {
    Write-Host "[FAIL] gbasm_to_c.lib not found" -ForegroundColor Red
}

if (Test-Path "build\Release\gbasm2c.exe") {
    Write-Host "[PASS] gbasm2c.exe exists" -ForegroundColor Green
} else {
    Write-Host "[FAIL] gbasm2c.exe not found" -ForegroundColor Red
}
Write-Host ""
Write-Host ""

# Test 7: Output file verification
Write-Host "[TEST 7] Verify C output file was created" -ForegroundColor Yellow
if (Test-Path "output\core.c") {
    Write-Host "[PASS] output\core.c exists" -ForegroundColor Green
    $fileInfo = Get-Item "output\core.c"
    Write-Host "File size: $($fileInfo.Length) bytes" -ForegroundColor Gray
} else {
    Write-Host "[FAIL] output\core.c not found" -ForegroundColor Red
}
Write-Host ""
Write-Host ""

# Test 8: Count references
Write-Host "[TEST 8] Reference statistics" -ForegroundColor Yellow
if (Test-Path "test_output_all.txt") {
    $allContent = Get-Content test_output_all.txt -Raw
    
    if ($allContent -match "Total Functions: (\d+)") {
        Write-Host "Total Functions: $($Matches[1])" -ForegroundColor Cyan
    }
    
    if ($allContent -match "Total Variables: (\d+)") {
        Write-Host "Total Variables: $($Matches[1])" -ForegroundColor Cyan
    }
    
    if ($allContent -match "Total Macros: (\d+)") {
        Write-Host "Total Macros: $($Matches[1])" -ForegroundColor Cyan
    }
}
Write-Host ""
Write-Host ""

Write-Host "===================================" -ForegroundColor Cyan
Write-Host "Test Summary" -ForegroundColor Cyan
Write-Host "===================================" -ForegroundColor Cyan
Write-Host "Test artifacts created:" -ForegroundColor Gray
Write-Host "- test_output_functions.txt" -ForegroundColor White
Write-Host "- test_output_variables.txt" -ForegroundColor White
Write-Host "- test_output_all.txt" -ForegroundColor White
Write-Host "- test_output_ram.txt" -ForegroundColor White
Write-Host "- output\core.c" -ForegroundColor White
Write-Host ""
Write-Host "All tests completed!" -ForegroundColor Green
Write-Host ""
