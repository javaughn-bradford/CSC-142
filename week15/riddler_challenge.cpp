#include <iostream>
#include <string>

int main() {
    int riddleNumber = 7;
    std::string riddleText = "What has roots as nobody sees, is taller than trees...";
    bool solved = true;

    // Output the riddle information
    std::cout << "Riddle #" << riddleNumber << ": \"" << riddleText << "\"\n";
    std::cout << "Solved: " << (solved ? "Yes" : "No") << "\n";

    return 0;
}
