#include <stdio.h>

int main ()

{
    int designatedNumber = 7;
    int userGuess;

    printf("Guess an integer between 1-10\n");

    do 
    {
        scanf("%d", &userGuess);

        if (userGuess < designatedNumber)
        {
            printf("To low, try again\n");
        } else if (userGuess > designatedNumber)
        {
            printf("To high, try again\n");
        } else 
        {
            printf("Correct!\n");
        }
    }   while(userGuess != designatedNumber);


    return 0;
}