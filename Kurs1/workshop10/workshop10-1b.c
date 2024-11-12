#include <stdio.h>

void string()

{
    printf("Fredrik Martensson\n");
}

int main()

{
    int antal;

    printf("Hur många gånger vill du att ditt namn ska skrivas ut?\n");
    scanf("%d", &antal);

    for (int i = 0; i < antal; i++) 
    {
        string();
    }
   

    return 0;
}

