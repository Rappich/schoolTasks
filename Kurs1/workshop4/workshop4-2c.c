#include <stdio.h>

int main()
{

char num1, num2;

printf("Enter the first character\n");
scanf(" %c", &num1);
printf("Enter the second character\n");
scanf(" %c", &num2);

printf("Comparing %c with %c:\n", num1, num2);

    printf("%c equal to %c is %d\n", num1, num2, num1 == num2);
    printf("%c not equal %c is %d\n", num1, num2, num1 != num2);
    printf("%c greater than %c is %d\n", num1, num2, num1 > num2);
    printf("%c lesser than %c is %d\n", num1, num2, num1 < num2);
    printf("%c greater than or equal to %c is %d\n", num1, num2, num1 >= num2);
    printf("%c less than or equal to %c is %d\n", num1, num2, num1 <= num2);

return 0;

}