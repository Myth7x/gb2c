cmake_minimum_required(VERSION 3.20)
project(gbasm_to_c VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Options
option(BUILD_CLI "Build command-line executable" ON)
option(BUILD_TESTS "Build the test suite" ON)

# Library target (always built)
add_library(gbasm_to_c STATIC
    src/AsmParser.cpp
    src/AsmAnalyzer.cpp
    src/CGenerator.cpp
    src/Instruction.cpp
    src/Function.cpp
    src/Variable.cpp
    src/Converter.cpp
)

target_include_directories(gbasm_to_c
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

if(MSVC)
    target_compile_options(gbasm_to_c PRIVATE /W4)
else()
    target_compile_options(gbasm_to_c PRIVATE -Wall -Wextra -Wpedantic)
endif()

# CLI executable (optional)
if(BUILD_CLI)
    add_executable(gbasm2c src/main.cpp)
    target_link_libraries(gbasm2c PRIVATE gbasm_to_c)
    target_include_directories(gbasm2c PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
    
    if(MSVC)
        target_compile_options(gbasm2c PRIVATE /W4)
    else()
        target_compile_options(gbasm2c PRIVATE -Wall -Wextra -Wpedantic)
    endif()
    
    # Install CLI executable
    install(TARGETS gbasm2c DESTINATION bin)
endif()

# Add tests subdirectory
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
