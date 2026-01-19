@echo off
REM Run individual tests for GB Assembly to C Converter

echo ========================================
echo GB Assembly to C Converter - Individual Test Runner
echo ========================================
echo.

if not exist "build\tests\Release" (
    if not exist "build\Release" (
        echo ERROR: Build directory not found. Please run run_tests.bat first.
        exit /b 1
    )
    set TEST_DIR=build\Release
) else (
    set TEST_DIR=build\tests\Release
)

if "%1"=="" (
    echo Usage: run_individual_test.bat [test_name]
    echo.
    echo Available tests:
    echo   test_basic
    echo   test_joypad
    echo   test_playtime
    echo   test_flag_action
    echo   test_battle_core
    echo   all
    echo.
    echo Example: run_individual_test.bat test_basic
    exit /b 1
)

if "%1"=="all" (
    echo Running all tests...
    echo.
    
    echo [1/5] Running test_basic...
    %TEST_DIR%\test_basic.exe
    if errorlevel 1 (echo FAILED: test_basic) else (echo.)
    
    echo [2/5] Running test_joypad...
    %TEST_DIR%\test_joypad.exe
    if errorlevel 1 (echo FAILED: test_joypad) else (echo.)
    
    echo [3/5] Running test_playtime...
    %TEST_DIR%\test_playtime.exe
    if errorlevel 1 (echo FAILED: test_playtime) else (echo.)
    
    echo [4/5] Running test_flag_action...
    %TEST_DIR%\test_flag_action.exe
    if errorlevel 1 (echo FAILED: test_flag_action) else (echo.)
    
    echo [5/5] Running test_battle_core...
    %TEST_DIR%\test_battle_core.exe
    if errorlevel 1 (echo FAILED: test_battle_core) else (echo.)
    
    echo.
    echo ========================================
    echo All tests completed!
    echo ========================================
) else (
    if exist "%TEST_DIR%\%1.exe" (
        echo Running %1...
        echo.
        %TEST_DIR%\%1.exe
        if errorlevel 1 (
            echo.
            echo ========================================
            echo Test FAILED: %1
            echo ========================================
            exit /b 1
        ) else (
            echo.
            echo ========================================
            echo Test PASSED: %1
            echo ========================================
        )
    ) else (
        echo ERROR: Test executable not found: %TEST_DIR%\%1.exe
        exit /b 1
    )
)
