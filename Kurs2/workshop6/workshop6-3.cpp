#include <iostream> 
#include <vector> 

int main() 
{
    std::vector<std::string> growingList {"hej", "tjo", "walla", "hola", "lol"};

    std::cout << "Antal element i vektorn: " << growingList.size() << std::endl;


    std::cout << "Innehåll i vektorn: ";
    for (size_t i = 0; i < growingList.size(); ++i) 
    {
        std::cout << growingList.at(i) << " "; 
    }
    std::cout << std::endl;

    growingList.push_back("hello");
    growingList.push_back("hi");
    growingList.push_back("hey");
    growingList.push_back("greetings");
    growingList.push_back("salut");


    std::cout << "Innehåll i vektorn i kolumnformat:" << std::endl;
    for (const std::string& value : growingList) 
    {
        std::cout << value << std::endl;
    }

    growingList.clear();

    if (growingList.empty()) 
    {
        std::cout << "Vektorn är tom." << std::endl;
    } else 
    {
        std::cout << "Vektorn är inte tom." << std::endl;
    }
    
    return 0; 
}
