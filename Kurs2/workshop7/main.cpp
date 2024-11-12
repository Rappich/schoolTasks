#include <iostream>
#include "LibraryBook.h"

int main()
{

    LibraryBook theGreatBook("123-456-789", "The Great Book", "John Author", 10, 300);

    std::cout << "Initial Book Info: \n" << std::endl;
    theGreatBook.getBookInfo();

    theGreatBook.addCopies(4);
    std::cout << "After Adding 4 Copies: \n" << std::endl;
    std::cout << "Available Copies: " << theGreatBook.getInventoryStatus() << std::endl;

    theGreatBook.removeCopies(5);
    std::cout << "After Trying to Remove 5 Copies: \n" << std::endl;
    std::cout << "Available Copies: " << theGreatBook.getInventoryStatus() << std::endl;

    theGreatBook.removeCopies(2);
    std::cout << "After Removing 2 Copies: \n" << std::endl;
    std::cout << "Available Copies: " << theGreatBook.getInventoryStatus() << std::endl;

    return 0;
}
