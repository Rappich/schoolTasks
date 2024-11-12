#include <stdio.h>

void printline(char symbol, int n)

{
    char str[81];
    
    for (int i = 0; i < n; i++) 
    {
        str[i] = symbol;
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

int linelength = 30;



    printline('A', linelength);
    printf("            C programming Language Authors(s)\n");
    printline('$', linelength);
    printf(" 1. Fredrik Martensson\n");
    printf("2. Dennis M.Ritchie\n\n");
    printline('*', linelength);

    return 0;
}

