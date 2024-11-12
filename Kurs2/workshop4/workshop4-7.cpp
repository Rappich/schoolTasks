#include <iostream>
#include <cstdio>  
#include <cstring>  

using namespace std;

class Card
{
public:
    char suit[10];
    char value[10];

    void setCard(const char* suitInput, const char * valueInput)

    {
        strcpy(suit, suitInput);
        strcpy(value, valueInput);
    }

    void printCard() const
    {
        cout << "Card: " << value << " of " << suit << endl;
    }

};

int main()
{
    Card myCard;

    char userSuit[10];
    char userValue[10];

    cout << "Enter the suit (e.g., Hearts, Spades, Diamonds, Clubs): " << endl;
    cin >> userSuit;

    cout << "Enter the value (e.g., Ace, Two, One, Four etc.): " << endl;
    cin >> userValue;

    myCard.setCard(userSuit, userValue);

    myCard.printCard();

    return 0;
}
