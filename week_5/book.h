#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(const std::string& isbn, const std::string& author, const std::string& title, int edition, const std::string& pubCode, double price);
    
    std::string getISBN() const;
    std::string getAuthor() const;
    std::string getTitle() const;
    int getEdition() const;
    std::string getPubCode() const;
    double getPrice() const;
    void changePrice(double newPrice);

private:
    std::string isbn;
    std::string author;
    std::string title;
    int edition;
    std::string pubCode;
    double price;
};

#endif // BOOK_H
