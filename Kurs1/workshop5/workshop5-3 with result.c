#include <stdio.h>

int main() {
    double A, B;
    int operation;
    double result = 0;

    printf("Write the first integer: \n");
    scanf("%lf", &A);
    printf("Write the second integer: \n");
    scanf("%lf", &B);
    printf("Enter an operation press 1 to add, 2 to subtract, 3 to multiply and 4 to divide\n");
    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
            result = A + B;
            printf("%.1lf + %.1lf = %.1lf", A, B, result);
            break;
        
        case 2:
            result = A - B;
            printf("%.1lf - %.1lf = %.1lf", A, B, result);
            break;
        
        case 3:
            result = A * B;
            printf("%.1lf * %.1lf = %.1lf", A, B, result);
            break;
        case 4:
            result = A / B;
            printf("%.1lf / %.1lf = %.1lf", A, B, result);
            break;
        default:
            printf("You didn't type in the correct value, the operator does not compute\n");
    }


    return 0;
}
