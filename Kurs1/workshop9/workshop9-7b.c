

#include <stdio.h>
#include <string.h> 
int main()
{
char stringInput[30];
int length;

printf("\nEnter a string to copy:\n");
gets(stringInput);

length = sizeof(stringInput) / sizeof(stringInput[0]);
char stringCopy[length];


strcpy(stringCopy, stringInput);
printf("\nCopied string (using strcpy()-function) is %s", stringCopy);
return 0;
}
