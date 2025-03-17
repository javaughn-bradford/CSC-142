#include <iostream>
#include "book.h"
#pragma once
#include <string>
#include <cstdio>
#include <iomanip>

class Inventory {
private:
    Book* books;  // Array of books
    int nextEntry; // Counter to track the next available spot
    int length;    // Max size of the book array

public:
    // Constructor: Set size and initialize the array
    Inventory(int size) {
        length = size;
        books = new Book[length];  // Dynamically allocate memory
        nextEntry = 0;  // Start with no books added
    }

    // Destructor: Free memory when we're done
    ~Inventory() {
        delete[] books;
    }

    // Adds a book to the inventory, returns false if there's no space or if it's a duplicate
    bool addBook(const Book& newBook) {
        if (nextEntry < length) {
            // Check if the book already exists
            for (int i = 0; i < nextEntry; i++) {
                if (books[i] == newBook) {
                    return false;  // Found a duplicate, so don't add
                }
            }
            books[nextEntry] = newBook;  // Add the new book
            nextEntry++;  // Update the counter
            return true;  // Book added successfully
        }
        return false;  // No space left in the inventory
    }

    // Change the price of a book using its ISBN
    void changePrice(std::string isbn, double newPrice) {
        for (int i = 0; i < nextEntry; i++) {
            if (books[i].getISBN() == isbn) {
                books[i].changePrice(newPrice);
                break;
            }
        }
    }

    // Prints the inventory in a neat table format
    void printInventory() {
        std::cout << "-----------------------------------------------------------------------------------------\n";
        std::cout << "ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE\n";
        for (int i = 0; i < nextEntry; i++) {
            std::cout << books[i] << std::endl;  // Use the overloaded operator<<
        }
        std::cout << "-----------------------------------------------------------------------------------------\n";
    }
};
