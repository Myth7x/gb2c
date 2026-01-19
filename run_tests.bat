@echo off
REM Test script for GB Assembly to C Converter on Windows
REM This script builds and runs all unit tests

echo ========================================
echo GB Assembly to C Converter - Test Suite
echo ========================================
echo.

REM Check if build directory exists
if not exist "build" (
    echo Build directory not found. Creating build directory...
    mkdir build
    cd build
    
    echo Running CMake configuration...
    cmake .. -DBUILD_TESTS=ON
    if errorlevel 1 (
        echo ERROR: CMake configuration failed
        exit /b 1
    )
    
    cd ..
) else (
    echo Build directory found.
)

REM Build the project
echo.
echo Building project...
cd build
cmake --build . --config Release
if errorlevel 1 (
    echo ERROR: Build failed
    cd ..
    exit /b 1
)
cd ..

echo.
echo Build successful!
echo.
echo ========================================
echo Running Tests
echo ========================================
echo.

REM Run tests using CTest
cd build
ctest --output-on-failure -C Release
set TEST_RESULT=%errorlevel%
cd ..

echo.
echo ========================================
if %TEST_RESULT%==0 (
    echo All tests PASSED!
    echo ========================================
    exit /b 0
) else (
    echo Some tests FAILED!
    echo ========================================
    exit /b 1
)
