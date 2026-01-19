#!/bin/bash
# Test script for GB Assembly to C Converter on Unix-like systems
# This script builds and runs all unit tests

set -e  # Exit on error

echo "========================================"
echo "GB Assembly to C Converter - Test Suite"
echo "========================================"
echo

# Check if build directory exists
if [ ! -d "build" ]; then
    echo "Build directory not found. Creating build directory..."
    mkdir build
    cd build
    
    echo "Running CMake configuration..."
    cmake .. -DBUILD_TESTS=ON
    
    cd ..
else
    echo "Build directory found."
fi

# Build the project
echo
echo "Building project..."
cd build
cmake --build . --config Release

echo
echo "Build successful!"
echo
echo "========================================"
echo "Running Tests"
echo "========================================"
echo

# Run tests using CTest
ctest --output-on-failure -C Release
TEST_RESULT=$?

echo
echo "========================================"
if [ $TEST_RESULT -eq 0 ]; then
    echo "All tests PASSED!"
else
    echo "Some tests FAILED!"
fi
echo "========================================"

cd ..
exit $TEST_RESULT
