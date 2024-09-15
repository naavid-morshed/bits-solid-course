#ifndef ABSTRACT_LIBRARY_MEMBER_H
#define ABSTRACT_LIBRARY_MEMBER_H

#include <iostream>
#include "../Task_One/book.h"

class AbstractLibraryMember
{
private:
    std::string memberId;

public:
    AbstractLibraryMember(std::string memberId) : memberId(memberId) {}

    std::string getMemberId()
    {
        return this->memberId;
    }

    virtual void borrowBook(Book &book) = 0;
    virtual void returnBook(Book &book) = 0;

    virtual void borrowBook(Book* book) = 0;
    virtual void returnBook(Book* book) = 0;
};

#endif