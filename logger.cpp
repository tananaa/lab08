#include <iostream>
#include <fstream>
#include <string>

int main() {
    const char* logPath = std::getenv("LOG_PATH");
    if (!logPath) {
        std::cerr << "LOG_PATH not set" << std::endl;
        return 1;
    }
    std::ofstream file(logPath);
    std::string line;
    while (std::getline(std::cin, line)) {
        file << line << std::endl;
    }
    return 0;
}
