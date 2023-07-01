#include <iostream>
#include <fstream>

int main() {
    std::ifstream sourceFile("source.txt");   // Open source file for reading
    std::ofstream destinationFile("destination.txt");   // Open destination file for writing
    
    if (sourceFile && destinationFile) {
        char ch;
        while (sourceFile.get(ch)) {
            destinationFile << ch;   // Write character to destination file
        }

        std::cout << "File copied successfully!" << std::endl;
    } else {
        std::cout << "Failed to open files." << std::endl;
    }

    sourceFile.close();   // Close source file
    destinationFile.close();   // Close destination file
    std::cout<<"NAME: Ujjwal Agrawal "<<std::endl<<"ROLL NO. : 22118107";

    return 0;
}