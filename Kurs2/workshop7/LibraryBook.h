#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <string>

class LibraryBook
{
private:
    std::string isbn;
    std::string title;
    std::string author;
    int copies_available;
    int total_pages;

public:
    LibraryBook(std::string isbn, std::string title, std::string author, int copies, int pages);
    
    void addCopies(int qty);
    void removeCopies(int qty);
    void getBookInfo();
    int getInventoryStatus();
};

#endif
