#include <iostream>
#include "inventory.h"
#include "book.h"

int main() {
    // Create an inventory with space for 10 books
    Inventory inventory(10);

    // New books to add to the inventory
    Book booksToAdd[] = {
        Book("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95),
        Book("0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95),
        Book("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38),
        Book("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38),
        Book("0134802217", "Tony Gaddis", "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95),
        Book("0134462017", "Tony Gaddis", "Starting Out With Java: Early Objects", 6, "PE", 58.50)
    };

    // Try adding the books to the inventory
    for (const Book& book : booksToAdd) {
        if (!inventory.addBook(book)) {
            std::cout << "ERROR adding this book: " << book.getISBN() << std::endl;
        }
    }

    // Print the inventory after adding books
    std::cout << "\nInitial Inventory Report:\n";
    inventory.printInventory();

    // Update the prices for a few books and print the inventory again
    inventory.changePrice("013478796X", 50.00);
    inventory.changePrice("0143067889", 9.95);
    inventory.changePrice("0134743350", 100.00);

    std::cout << "\nFinal Inventory Report:\n";
    inventory.printInventory();

    return 0;
}
