#include "Converter.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>
#include <string>

namespace fs = std::filesystem;

struct Options {
    std::string inputPath;
    std::string outputDir = "output";
    bool verbose = false;
    bool showHelp = false;
};

void PrintUsage(const char* programName) {
    std::cout << "GB Assembly to C Converter - Command Line Tool\n\n";
    std::cout << "Usage: " << programName << " [options] <input>\n\n";
    std::cout << "Arguments:\n";
    std::cout << "  <input>              Input file (.asm) or directory containing .asm files\n\n";
    std::cout << "Options:\n";
    std::cout << "  -o, --output <dir>   Output directory for .c files (default: 'output')\n";
    std::cout << "  -v, --verbose        Enable verbose output\n";
    std::cout << "  -h, --help           Show this help message\n\n";
    std::cout << "Examples:\n";
    std::cout << "  " << programName << " joypad.asm\n";
    std::cout << "  " << programName << " -o converted engine/battle\n";
    std::cout << "  " << programName << " -v -o out core.asm\n\n";
    std::cout << "Note: To build as library or executable, use CMake:\n";
    std::cout << "  Library:    cmake .. -DBUILD_CLI=OFF\n";
    std::cout << "  Executable: cmake .. -DBUILD_CLI=ON (default)\n";
}

Options ParseCommandLine(int argc, char* argv[]) {
    Options opts;
    
    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        
        if (arg == "-h" || arg == "--help") {
            opts.showHelp = true;
            return opts;
        } else if (arg == "-v" || arg == "--verbose") {
            opts.verbose = true;
        } else if (arg == "-o" || arg == "--output") {
            if (i + 1 < argc) {
                opts.outputDir = argv[++i];
            } else {
                std::cerr << "Error: " << arg << " requires an argument\n";
                opts.showHelp = true;
                return opts;
            }
        } else if (arg[0] == '-') {
            std::cerr << "Error: Unknown option: " << arg << "\n";
            opts.showHelp = true;
            return opts;
        } else {
            if (opts.inputPath.empty()) {
                opts.inputPath = arg;
            } else {
                std::cerr << "Error: Multiple input paths specified\n";
                opts.showHelp = true;
                return opts;
            }
        }
    }
    
    if (opts.inputPath.empty() && !opts.showHelp) {
        std::cerr << "Error: No input file or directory specified\n";
        opts.showHelp = true;
    }
    
    return opts;
}

std::string ReadFile(const fs::path& path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file: " + path.string());
    }
    
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void WriteFile(const fs::path& path, const std::string& content) {
    std::ofstream file(path);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to create file: " + path.string());
    }
    
    file << content;
}

std::string GetOutputFileName(const fs::path& inputPath) {
    std::string filename = inputPath.stem().string();
    return filename + ".c";
}

bool ConvertFile(const fs::path& inputPath, const fs::path& outputPath, bool verbose) {
    try {
        if (verbose) {
            std::cout << "Converting: " << inputPath.filename().string() << " -> " 
                      << outputPath.filename().string() << std::endl;
        }
        

        std::string asmSource = ReadFile(inputPath);
        
        if (verbose) {
            std::cout << "  Input size: " << asmSource.length() << " bytes" << std::endl;
        }
        

        GBAsm::Converter converter;
        std::string cCode = converter.ConvertToC(asmSource);
        

        WriteFile(outputPath, cCode);
        

        const auto& functions = converter.GetFunctions();
        const auto& variables = converter.GetVariables();
        
        if (verbose) {
            std::cout << "  Functions found: " << functions.size() << std::endl;
            std::cout << "  Variables found: " << variables.size() << std::endl;
            std::cout << "  Output size: " << cCode.length() << " bytes" << std::endl;
        }
        
        std::cout << "✓ " << inputPath.filename().string() << " converted successfully" << std::endl;
        return true;
        
    } catch (const std::exception& e) {
        std::cerr << "✗ Error converting " << inputPath.filename().string() 
                  << ": " << e.what() << std::endl;
        return false;
    }
}

int ProcessDirectory(const fs::path& inputDir, const fs::path& outputDir, bool verbose) {
    if (!fs::exists(inputDir)) {
        std::cerr << "Error: Input directory does not exist: " << inputDir << std::endl;
        return 1;
    }
    
    if (!fs::is_directory(inputDir)) {
        std::cerr << "Error: Input path is not a directory: " << inputDir << std::endl;
        return 1;
    }
    

    fs::create_directories(outputDir);
    

    std::vector<fs::path> asmFiles;
    for (const auto& entry : fs::recursive_directory_iterator(inputDir)) {
        if (entry.is_regular_file() && entry.path().extension() == ".asm") {
            asmFiles.push_back(entry.path());
        }
    }
    
    if (asmFiles.empty()) {
        std::cout << "No .asm files found in directory: " << inputDir << std::endl;
        return 0;
    }
    
    std::cout << "Found " << asmFiles.size() << " .asm file(s) to convert" << std::endl;
    std::cout << "Output directory: " << fs::absolute(outputDir) << "\n" << std::endl;
    
    int successCount = 0;
    int failCount = 0;
    
    for (const auto& asmFile : asmFiles) {

        fs::path relativePath = fs::relative(asmFile, inputDir);
        fs::path outputPath = outputDir / relativePath.parent_path() / GetOutputFileName(asmFile);
        

        fs::create_directories(outputPath.parent_path());
        
        if (ConvertFile(asmFile, outputPath, verbose)) {
            successCount++;
        } else {
            failCount++;
        }
    }
    
    std::cout << "\n=== Conversion Summary ===" << std::endl;
    std::cout << "Total files: " << asmFiles.size() << std::endl;
    std::cout << "Successful: " << successCount << std::endl;
    std::cout << "Failed: " << failCount << std::endl;
    
    return failCount > 0 ? 1 : 0;
}

int ProcessFile(const fs::path& inputFile, const fs::path& outputDir, bool verbose) {
    if (!fs::exists(inputFile)) {
        std::cerr << "Error: Input file does not exist: " << inputFile << std::endl;
        return 1;
    }
    
    if (!fs::is_regular_file(inputFile)) {
        std::cerr << "Error: Input path is not a file: " << inputFile << std::endl;
        return 1;
    }
    
    if (inputFile.extension() != ".asm") {
        std::cerr << "Warning: Input file does not have .asm extension: " 
                  << inputFile << std::endl;
    }
    

    fs::create_directories(outputDir);
    

    fs::path outputPath = outputDir / GetOutputFileName(inputFile);
    
    std::cout << "Input file: " << fs::absolute(inputFile) << std::endl;
    std::cout << "Output directory: " << fs::absolute(outputDir) << "\n" << std::endl;
    
    return ConvertFile(inputFile, outputPath, verbose) ? 0 : 1;
}

int main(int argc, char* argv[]) {
    Options opts = ParseCommandLine(argc, argv);
    
    if (opts.showHelp) {
        PrintUsage(argv[0]);
        return opts.inputPath.empty() ? 1 : 0;
    }
    
    std::cout << "=== GB Assembly to C Converter ===" << std::endl;
    std::cout << "Version 1.0.0\n" << std::endl;
    
    try {
        fs::path inputPath(opts.inputPath);
        fs::path outputDir(opts.outputDir);
        
        if (fs::is_directory(inputPath)) {
            return ProcessDirectory(inputPath, outputDir, opts.verbose);
        } else {
            return ProcessFile(inputPath, outputDir, opts.verbose);
        }
        
    } catch (const std::exception& e) {
        std::cerr << "Fatal error: " << e.what() << std::endl;
        return 1;
    }
}
