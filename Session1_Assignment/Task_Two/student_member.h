#ifndef STUDENT_MEMBER_H
#define STUDENT_MEMBER_H

#include <iostream>
#include "library_member.h"
#include "../Task_One/book.h"

class StudentMember : AbstractLibraryMember
{
public:
    StudentMember(std::string memberId) : AbstractLibraryMember(memberId) {}
    
    void borrowBook(Book &book)
    {
        if (book.getIsAvailable())
        {
            book.setIsAvailable(false);
            std::cout << "\nBook borrowed successfully!\n"
                      << std::endl;
        }
        else
        {
            std::cout << "Book is unavailable" << std::endl;
        }
    }

    void returnBook(Book &book)
    {
        if (book.getIsAvailable())
        {
            std::cout << "You cannot return a book you do not own." << std::endl;
        }
        else
        {
            book.setIsAvailable(false);
            std::cout << "Book returned!" << std::endl;
        }
    }

    void borrowBook(Book *book)
    {
        if (book->getIsAvailable())
        {
            book->setIsAvailable(false);
            std::cout << "Book borrowed successfully!\n"
                      << std::endl;
        }
        else
        {
            std::cout << "Book is unavailable" << std::endl;
        }
    }

    void returnBook(Book *book)
    {
        if (book->getIsAvailable())
        {
            std::cout << "You cannot return a book you do not own." << std::endl;
        }
        else
        {
            book->setIsAvailable(false);
            std::cout << "Book returned!" << std::endl;
        }
    }
};

#endif