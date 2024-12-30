#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>

// Morse to Command Mapping
std::map<std::string, std::string> morseToCommand = {
    {".-", "VARIABLE"},
    {"...---...", "FUNCTION"},
    {"-.-.", "PRINT"},
    {"--..--", ","},
    {"-", "1"},
    {"..---", "2"}
};

// Function to parse Morse code into commands
std::string parseMorseCode(const std::string& morseCode) {
    if (morseToCommand.count(morseCode)) {
        return morseToCommand[morseCode];
    }
    return "UNKNOWN";
}

// Function to execute a command
void executeCommand(const std::string& command, const std::string& args = "") {
    if (command == "VARIABLE") {
        std::cout << "Declaring a variable: " << args << std::endl;
    } else if (command == "FUNCTION") {
        std::cout << "Defining a function: " << args << std::endl;
    } else if (command == "PRINT") {
        std::cout << args << std::endl;
    } else {
        std::cout << "Unknown command: " << command << std::endl;
    }
}

int main() {
    std::string filename;
    std::cout << "Enter the Morse code file (.mml): ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string morseCode, args;
        iss >> morseCode; // First part is the Morse code command
        std::getline(iss, args); // Rest is the arguments
        std::string command = parseMorseCode(morseCode);
        executeCommand(command, args);
    }

    file.close();
    return 0;
}
