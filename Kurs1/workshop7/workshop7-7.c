#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("\nAdvanced Calculator\n");
        printf("0. Exit\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square Root\n6. Power\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        if (choice == 5) {
            printf("Enter a number: ");
            scanf("%f", &num1);

            if (num1 < 0) {
                printf("Error: Cannot calculate the square root of a negative number.\n");
            } else {
                result = sqrt(num1);
                printf("Result: %.2f\n", result);
            }
        } else if (choice == 6) {
            printf("Enter a base number and exponent: ");
            scanf("%f %f", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2f\n", result);
        } else {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            switch (choice) {
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
    }

    return 0;
}
