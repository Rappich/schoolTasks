#include <iostream>
#include <cstdio>  
#include <cstring>  

using namespace std;

class Card
{
public:
    char suit[10];
    char value[10];
};

int main()
{

    Card card1 = {"Hearts", "Four"};

    Card card2;
    strcpy(card2.suit, "Clubs");
    strcpy(card2.value, "Eight");

    cout << "Card 1: " << card1.suit << " " << card1.value << endl;

    Card deck[3] = {{"Spades", "Jack"},{"Clubs", "Queen"}, {"Diamons", "Nine"}};

    for (int i = 0; i < 3; i++) 
    {
        cout << "Card " << (i + 1) << ": " << deck[i].suit << " " << deck[i].value << endl;
    }

    return 0;
}
