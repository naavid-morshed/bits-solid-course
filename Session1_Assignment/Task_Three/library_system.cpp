#include <iostream>
#include "../Task_One/book.h"
#include "../Task_Two/student_member.h"

int main()
{
    Book book1("Wuthering Heights", "Emily Bronte", "23234-23432-234", true);
    Book *book2 = new Book("Tess of the d'Urbervilles", "Thomas Hardy", "1234-1234-1324", true);

    StudentMember std1("182011966");

    // accessed through automatic memory allocation
    book1.displayBookDetails();
    std1.borrowBook(book1);

    book1.displayBookDetails();
    std1.returnBook(book1);

    // accessed through manually allocated in heap object
    book2->displayBookDetails();
    std1.borrowBook(book2);

    book2->displayBookDetails();
    std1.returnBook(book2);

    delete book2;
}