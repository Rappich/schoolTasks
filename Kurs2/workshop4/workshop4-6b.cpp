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

void initializeDeck(Card deck[]);

int main()
{
    Card deck[52];


    initializeDeck(deck);

    for (int i = 0; i < 52; i++) 
    {
        cout << "Card " << (i + 1) << ": " << deck[i].suit << " " << deck[i].value << endl;
    }

    return 0;
}


void initializeDeck(Card deck[])
{

    const char* suits[] = {"Hearts", "Spades", "Diamonds", "Clubs"};
    const char* values[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    int index = 0; 

    for (int i = 0; i < 4; i++)
    {
         for(int j = 0; j < 13; j++)
         
    {
            strcpy(deck[index].suit, suits[i]); 
            strcpy(deck[index].value, values[j]); 
            index++; 
    }
    }
}
