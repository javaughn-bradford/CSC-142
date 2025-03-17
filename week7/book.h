#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
#include <iomanip>

class Book {
public:
    // Constructor with default values for easier initialization
    Book(const std::string& isbn = "", const std::string& author = "", const std::string& title = "",
         int edition = 0, const std::string& pubCode = "", double price = 0.0)
        : isbn(isbn), author(author), title(title), edition(edition), pubCode(pubCode), price(price) {}

    // Getter methods
    std::string getISBN() const { return isbn; }
    std::string getAuthor() const { return author; }
    std::string getTitle() const { return title; }
    int getEdition() const { return edition; }
    std::string getPubCode() const { return pubCode; }
    double getPrice() const { return price; }

    // Setter to change the price
    void changePrice(double newPrice) { price = newPrice; }

    // Overloading the '<<' operator for easy printing of Book details
    friend std::ostream& operator<<(std::ostream& os, const Book& book) {
        os << book.isbn << " "
           << std::setw(15) << std::left << book.author
           << std::setw(43) << std::left << book.title
           << std::setw(2)  << std::right << book.edition
           << std::setw(6)  << std::right << book.pubCode
           << std::setw(8)  << std::right << "$" << std::fixed << std::setprecision(2) << book.price;
        return os;
    }

    // Overloading the '==' operator to compare books by ISBN
    friend bool operator==(const Book& mainBook, const Book& otherBook) {
        return mainBook.isbn == otherBook.isbn;
    }

private:
    std::string isbn;
    std::string author;
    std::string title;
    int edition;
    std::string pubCode;
    double price;
};

#endif // BOOK_H
