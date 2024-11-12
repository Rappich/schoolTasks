#include <stdio.h>

int showMenu();
float performOperation();
float mathCalculations();
float showResult();
char runAgain();



int main() {
    int choice;
    float num1, num2, result;

    while (1) 
    {
        printf("\nSimple Calculator\n");
        printf("0. Exit\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        if (choice == 0) 
        {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) 
        {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}
