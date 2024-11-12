#include "LibraryBook.h"
#include <iostream>

LibraryBook::LibraryBook(std::string isbn, std::string title, std::string author, int copies, int pages) 
    {
        this->isbn = isbn;
        this->title = title;
        this->author = author;
        this->copies_available = copies;
        this->total_pages = pages;
    }
    
void LibraryBook::addCopies(int qty)
{
    if (qty >= 0)
    {
        copies_available += qty;
        std::cout << qty << " copies have been added. Total copies are now: " << copies_available << std::endl;
    }
    else 
    {
        std::cout << "Error: cannot add a negative quantity of copies!" << std::endl;
    }
}

void LibraryBook::removeCopies(int qty)
{
    if (qty >= 0)
    {
        copies_available -= qty;
        std::cout << qty << " copies have been removed. Total copies are now: " << copies_available << std::endl;
    }
    else 
    {
        std::cout << "Error: cannot remove a negative quantity of copies!" << std::endl;
    }
}

void LibraryBook::getBookInfo() 
{
    std::cout << "ISBN: " << isbn << std::endl
              << "Title: " << title << std::endl
              << "Author: " << author << std::endl
              << "Available Copies: " << copies_available << std::endl
              << "Total Pages: " << total_pages << std::endl;
}

int LibraryBook::getInventoryStatus()
{
    return copies_available;
}
