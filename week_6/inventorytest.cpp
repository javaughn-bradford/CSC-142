#include <iostream>
#include <string>
#include <cstdio>
#include "Inventory.h"
#include "Book.h"

// Function to add a book to the inventory and notify whether it was successful or not
void addBookToInventory(Inventory& inventory, const Book& book) {
    if (inventory.addBook(book)) {
        std::cout << "The book was added to the inventory." << std::endl;
    } else {
        std::cout << "There was an issue adding the book to the inventory." << std::endl;
    }
}

int main() {
    // Create an inventory with space for up to 10 books
    Inventory inventory(10);

    // Define a few books with their details
    Book book1("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 118.00);
    Book book2("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00);
    Book book3("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 135.00);
    Book book4("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 40.00);
    Book book6("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 18.00);

    // Try adding each book to the inventory
    addBookToInventory(inventory, book1);
    addBookToInventory(inventory, book2);
    addBookToInventory(inventory, book3);
    addBookToInventory(inventory, book4);
    addBookToInventory(inventory, book5);
    addBookToInventory(inventory, book6);

    // Print the current list of books in the inventory
    inventory.printInventory();

    // Let's update the prices of a few books
    inventory.changePrice("013478796X", 50.00);  // Change price for Tony Gaddis' book
    inventory.changePrice("0143067889", 9.95);   // Change price for Ray Kurzweil's book
    inventory.changePrice("0134743350", 100.00); // Change price for Harvey Deitel's book

    // Print the updated inventory with new prices
    inventory.printInventory();

    return 0;
}
