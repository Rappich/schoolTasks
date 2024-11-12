
#include <stdio.h>
#include <string.h>

int main()
{
char stringInput[30];
int i; 
int length;

printf("\nEnter a string to copy:\n");
gets(stringInput);

length = sizeof(stringInput) / sizeof(stringInput[0]);
char stringCopy[length];

for( i = 0; stringInput[i] != '\0'; i++ ) 
{
stringCopy[i] = stringInput[i];
}
stringCopy[i] = '\0';

printf("\nCopied string (w/o using strcpy()-function) is %s", stringCopy);

return 0;

}
