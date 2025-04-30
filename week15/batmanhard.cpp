#include <iostream>

void showGadgets(std::string g1, std::string g2) {
    std::cout << "Gadget 1: " << g1 << ", Gadget 2: " << g2 << "\n";
}

int main() {
    std::string gadget1 = "Batarang";
    std::string gadget2 = "Grappling Hook";

    showGadgets(gadget1, gadget2);

    std::string temp = gadget1;
    gadget1 = gadget2;
    gadget2 = temp;

    
    showGadgets(gadget1, gadget2);

    return 0;
}
