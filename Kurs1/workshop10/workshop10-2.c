#include <stdio.h>

void printline()

{
    char str[81];
    
    for (int i = 0; i < 80; i++) 
    {
        str[i] = '-';
    }
    str[80] = '\0';

    printf("%s", str);


}
void string() 
{
    char name[50];


    printf("\nWhat do your output string want to say?");
    
    fgets(name, sizeof(name), stdin);


    printf(" %s", name);
}



int main()

{
    printline();
    printf("            C programming Language Authors(s)\n");
    printline();
    printf(" 1. Fredrik Martensson\n");
    printf("2. Dennis M.Ritchie\n\n");
    printline();

    return 0;
}

