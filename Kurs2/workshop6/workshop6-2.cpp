#include <iostream>
#include <string>

using namespace std;

int main()

{

    std::string niceString = "This is a fine string. ";
    std::cout << niceString << endl;
    niceString += "Would be a shame if anything happened to it.";
    std::cout << "After input: " << niceString << endl;

    int here = niceString.find("Would");
    std::cout << here << endl;

    niceString.erase(here, 5);
    std::cout << niceString << endl;

    niceString.insert(7," certainly");
    std::cout << niceString << endl;

    std::string okayString = niceString;
    okayString.replace(okayString.find("a fine"), 6, "an okay");


     if (niceString.compare(okayString) != 0) 
     {
        std::cout << "These last two strings are not the same!" << std::endl;
    }

    

    return 0;
}