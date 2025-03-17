#include <iostream>
#include "book.h"
#pragma once
#include <string>
#include <cstdio>

class Inventory {
private:
    Book* books;  // Pointer to the array of books
    int nextEntry; // Tracks how many books have been added
    int length;    // Size of the book array

public:
    // Constructor to set the size of the array and initialize variables
    Inventory(int size) {
        length = size;
        books = new Book[length];  // Allocate memory for the array
        nextEntry = 0;  // Start with no books added
    }

    // Destructor to free the allocated memory
    ~Inventory() {
        delete[] books;
    }

    // Adds a book to the array, returns true if successful
    bool addBook(Book newBook) {
        if (nextEntry < length) {
            books[nextEntry] = newBook;
            nextEntry++;
            return true;
        }
        return false;  // Return false if array is full
    }

    // Changes the price of a book based on its ISBN
    void changePrice(std::string isbn, double newPrice) {
        for (int i = 0; i < length; i++) {
            if (books[i].getISBN() == isbn) {
                books[i].changePrice(newPrice);
                break;
            }
        }
    }

    // Prints the inventory in a formatted table
    void printInventory() {
        printf("-----------------------------------------------------------------------------------------\n");
        printf("%-11s %-15s %-43s %-2s  %-6s  %2s\n", "ISBN", "AUTHOR", "TITLE", "ED", "PUB", "PRICE");
        for (int i = 0; i < nextEntry; i++) {
            printf("%-11s %-15.13s %-43.39s %2i  %3s  $%7.2f\n", 
                   books[i].getISBN().c_str(), books[i].getAuthor().c_str(), 
                   books[i].getTitle().c_str(), books[i].getEdition(), 
                   books[i].getPubCode().c_str(), books[i].getPrice());
        }
        printf("-----------------------------------------------------------------------------------------\n");
    }
};
