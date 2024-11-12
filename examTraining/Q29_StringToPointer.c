#include <stdio.h>
#include <string.h>


void reverseString(char *str);

int main() 
{
    char str[100];
    
    printf("Ange en sträng: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    reverseString(str);
    
    return 0;
}

void reverseString(char *str) 
{
    int length = strlen(str);
    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}