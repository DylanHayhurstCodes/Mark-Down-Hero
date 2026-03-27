#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: saver_engine <text_to_save>" << std::endl;
        return 1;
    }

    std::ofstream outFile("note.txt");
    if (outFile.is_available()) {
        outFile << argv[1];
        outFile.close();
        std::cout << "File saved successfully as note.txt" << std::endl;
    } else {
        std::cerr << "Error: Could not create file." << std::endl;
        return 1;
    }

    return 0;
}
