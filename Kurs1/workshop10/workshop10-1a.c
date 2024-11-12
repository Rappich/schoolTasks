#include <stdio.h>

void string();

int main()
{
    int antal;

    printf("Hur många gånger vill du att ditt namn ska skrivas ut?\n");
    scanf("%d", &antal);

    for (int i = 0; i < antal; i++) 
    {
        string(i);
    }
   

    return 0;
}

void string()

{
    printf("Fredrik Martensson\n");
}