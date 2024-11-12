#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (a and b) such that a < b:\n");
    scanf("%d %d", &a, &b);

    while (a >= b) {
        printf("Invalid input. Please ensure that a < b.\n");
        printf("Enter two integers (a and b):\n");
        scanf("%d %d", &a, &b);
    }

    for (int i = a; i <= b; i++) 
    {
        printf("Multiplication table for %d:\n", i);
        
        for (int j = 1; j <= 10; j++) 
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        
        printf("\n");
    }

    return 0;
}