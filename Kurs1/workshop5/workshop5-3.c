#include <stdio.h>

int main() {
    double A, B;
    int operation;

    printf("Write the first integer: \n");
    scanf("%lf", &A);
    printf("Write the second integer: \n");
    scanf("%lf", &B);
    printf("Enter an operation press 1 to add, 2 to subtract, 3 to multiply and 4 to divide\n");
    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
            printf("%.1lf + %.1lf = %.1lf", A, B, A+B);
            break;
        
        case 2:
            printf("%.1lf - %.1lf = %.1lf", A, B, A-B);
            break;
        
        case 3:
            printf("%.1lf * %.1lf = %.1lf", A, B, A*B);
            break;
        case 4:
            printf("%.1lf / %.1lf = %.1lf", A, B, A/B);
            break;
        default:
            printf("You didn't type in the correct value, the operator does not compute\n");
    }


    return 0;
}
