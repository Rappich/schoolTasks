#include <stdio.h>

int main()
{

float num1, num2;

printf("Enter the first integer\n");
scanf("%f", &num1);
printf("Enter the second integer\n");
scanf("%f", &num2);

printf("Comparing %f with %f:\n", num1, num2);

    printf("%f equal to %f is %f\n", num1, num2, num1 == num2);
    printf("%f not equal %f is %f\n", num1, num2, num1 != num2);
    printf("%f greater than %f is %f\n", num1, num2, num1 > num2);
    printf("%f lesser than %f is %f\n", num1, num2, num1 < num2);
    printf("%f greater than or equal to %f is %f\n", num1, num2, num1 >= num2);
    printf("%f less than or equal to %f is %f\n", num1, num2, num1 <= num2);

return 0;

}