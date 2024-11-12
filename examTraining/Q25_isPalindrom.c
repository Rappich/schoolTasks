#include <stdio.h>
#include <string.h>

int main ()

{
    char string[20];
    int flag = 0;

    printf("Enter a word: \n");
    scanf("%s", string);

    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not a palindrome\n", string);
    }   else 
    {
        printf("%s is a palindrome\n", string);
    }

    return 0;
}