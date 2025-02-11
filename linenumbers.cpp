#include<iostream>
#include<fstream>
#include<string>
#include<iomanip> 

int main() {
    std::ifstream inFile("mary.txt");  // Open file to copy text 
    std::ofstream outFile("output.txt");  // file for printing the mary text with line numbers
    std::string line;
    int lineNumber = 1;  //  line number

   
    if (!inFile) {
        std::cerr << "Error: Could not open the input file!" << std::endl;
        return 1;  
    }

    // Check if the output file opened successfully
    if (!outFile) {
        std::cerr << "Error: Could not open the output file!" << std::endl;
        return 1;  
    }

    // Check if the input file is empty
    if (inFile.peek() == std::ifstream::traits_type::eof()) {
        std::cerr << "Error: The input file is empty!" << std::endl;
        return 1;  // Exit if the file is empty
    }

    // Read lines from the input file
    while (std::getline(inFile, line)) {
        // print the content to the output file
        outFile << std::setw(5) << lineNumber << ". " << line << std::endl;
        lineNumber++;  // adding the line number
    }

    // closing both files
    inFile.close();
    outFile.close();

    std::cout << "The lines have been printed to 'output.txt'." << std::endl;

    return 0;
}
