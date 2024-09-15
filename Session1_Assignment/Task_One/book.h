#include <iostream>

#ifndef BOOK_H
#define BOOK_H

class Book
{
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;

public:
    Book(std::string title, std::string author, std::string isbn, bool isAvailable) : title(title), author(author), isbn(isbn), isAvailable(isAvailable)
    {
        if (title.empty())
            throw std::invalid_argument("Title cannot be empty");
        if (author.empty())
            throw std::invalid_argument("Author cannot be empty");
        if (isbn.empty())
            throw std::invalid_argument("ISBN cannot be empty");
    }

    void setTitle(std::string title)
    {
        this->title = title;
    }

    void setAuthor(std::string author)
    {
        this->author = author;
    }

    void setIsbn(std::string isbn)
    {
        this->isbn = isbn;
    }

    void setIsAvailable(bool isAvailable)
    {
        this->isAvailable = isAvailable;
    }

    bool getIsAvailable()
    {
        return this->isAvailable;
    }

    void displayBookDetails()
    {
        std::cout << "\nTitle: " << this->title << "\n";
        std::cout << "Author: " << this->author << "\n";
        std::cout << "ISBN: " << this->isbn << "\n";
        std::cout << "Availability: " << (this->isAvailable ? "Available" : "Unavailable\n") << std::endl;
    }
};
#endif
