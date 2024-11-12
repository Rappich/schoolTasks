
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Comparing %d and %d:\n", num1, num2);
    
    printf("%d == %d is %d\n", num1, num2, num1 == num2);
    printf("%d != %d is %d\n", num1, num2, num1 != num2);
    printf("%d > %d is %d\n", num1, num2, num1 > num2);
    printf("%d < %d is %d\n", num1, num2, num1 < num2);
    printf("%d >= %d is %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d is %d\n", num1, num2, num1 <= num2);

    return 0;

}