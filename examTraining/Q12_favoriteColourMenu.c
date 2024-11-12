#include <stdio.h>

int main ()

{
int choice;

    printf("What colour do you want?\n");
    printf("1. Red \n2. Blue \n3. Green\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You choose red!\n");
        break;
    case 2:
        printf("You choose Blue!\n");
        break;
    case 3:
        printf("You choose Green!\n");
        break;
    default:
        printf("invalid choice\n");
        break;
    }

    return 0;
}