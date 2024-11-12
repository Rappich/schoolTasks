#include <iostream>
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
    LibraryBook(std::string isbn, std::string title, std::string author, int copies, int pages)
    {    
        this->isbn = isbn;
        this->title = title;
        this->author = author;
        this->copies_available = copies;
        this->total_pages = pages;
    }
    
    void addCopies(int qty)
    {
        if(qty >= 0)
        {
        copies_available += qty;
        std::cout << qty << "We've added copies to the library. Total copies are now: " << copies_available << std::endl;
        }
        else 
        {
        std::cout << "Error: cannot add a negative quantity of copies!" << std::endl;
        }
    }
    void removeCopies(int qty)
    {
        if(qty >= 0)
        {
        copies_available -= qty;
        std::cout << qty << "We've deleted copies to the library. Total copies are now: " << copies_available << std::endl;
        }
        else 
        {
        std::cout << "Error: cannot add a negative quantity of copies!" << std::endl;
        }
    }
    void getBookInfo() 
    {
        std::cout << "ISBN: " << isbn << std::endl 
                  << "Title: " << title << std::endl
                  << "Author: " << author << std::endl
                  << "Available Copies: " << copies_available << std::endl
                  << "Total Pages: " << total_pages << std::endl;
    }
    int getInventoryStatus()
    {
        return copies_available;
    }

};

int main()
{
    LibraryBook theGreatBook("123-456-789", "The Great Book", "John Author", 10, 300);
    
    std::cout << "Initial Book Info: \n" << std::endl;
    theGreatBook.getBookInfo();

    theGreatBook.addCopies(4);
    std::cout << "After Adding 4 Copies: \n" << std::endl;
    std::cout << "Available Copies: \n" << theGreatBook.getInventoryStatus() << std::endl;

    theGreatBook.removeCopies(5);
    std::cout << "After Trying to Remove 5 Copies: \n" << std::endl;
    std::cout << "Available Copies: \n" << theGreatBook.getInventoryStatus() << std::endl;

    theGreatBook.removeCopies(2);
    std::cout << "After Removing 2 Copies: \n" << std::endl;
    std::cout << "Available Copies: \n" << theGreatBook.getInventoryStatus() << std::endl;

    return 0;
}