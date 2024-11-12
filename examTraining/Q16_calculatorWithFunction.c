#include <stdio.h>

float calculator(int choice, int num1, int num2);

int main() 
{
    int choice, num1, num2;
    char cont;

while (1) 
{
    printf("What do you want to calculate?\n");
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("First integer: \n");
    scanf("%d", &num1);

    printf("Second integer: \n");
    scanf("%d", &num2); 

    float result = calculator(choice, num1, num2);

    if (choice >= 1 && choice <= 4) 
    {
        printf("Result: %.2f\n", result); 
    } else {
        printf("Invalid choice. Please select a valid operation.\n");
    }

    printf("Do you want to continue?\n Press: ['y' or 'Y']\n");
    scanf(" %c", &cont);

        if (cont != 'y' && cont != 'Y')
        {
            break;
        }

}


    return 0;
}

float calculator(int choice, int num1, int num2) 
{
    switch (choice) 
    {
        case 1:
            return num1 + num2;
        case 2:
            return num1 - num2;
        case 3:
            return num1 * num2;
        case 4:
            if (num2 != 0) 
            {
                return (float)num1 / num2; 
            } else 
            {
                printf("You can't divide by 0.\n");
                return 0; 
            }
        default:
            return 0;
    }
}
