#include <stdio.h>

int main() {
    int A, B, C;

    printf("Write the first integer: \n");
    scanf("%d", &A);
    printf("Write the second integer: \n");
    scanf("%d", &B);
    printf("Write the third integer: \n");
    scanf("%d", &C);


    if (A < B && A < C) {
        printf("The smallest number is: %d\n", A);
    } else if (B < A && B < C) {
        printf("The smallest number is: %d\n", B);
    } else {
        printf("The smallest number is: %d\n", C);
    }


    if (A > B && A > C) {
        printf("The largest number is: %d\n", A);
    } else if (B > A && B > C) {
        printf("The largest number is: %d\n", B);
    } else {
        printf("The largest number is: %d\n", C);
    }

    return 0;
}
