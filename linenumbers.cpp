#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>  // For std::setw

int main() {
    std::ifstream inFile("mary.txt");  // Open file for reading
    std::ofstream outFile("output.txt");  // Open file for writing
    std::string line;
    int lineNumber = 1;  // Initialize line number

    // Check if the input file opened successfully
    if (!inFile) {
        std::cerr << "Error: Could not open the input file!" << std::endl;
        return 1;  // Exit if the file can't be opened
    }

    // Check if the output file opened successfully
    if (!outFile) {
        std::cerr << "Error: Could not open the output file!" << std::endl;
        return 1;  // Exit if the file can't be opened
    }

    // Read each line from the input file
    while (std::getline(inFile, line)) {
        // Write the line number and the content to the output file
        outFile << std::setw(5) << lineNumber << ". " << line << std::endl;
        lineNumber++;  // Increment the line number
    }

    // Close both files
    inFile.close();
    outFile.close();

    std::cout << "The numbered lines have been written to 'output.txt'." << std::endl;

    return 0;
}
