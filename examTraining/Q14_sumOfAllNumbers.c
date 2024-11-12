#include <stdio.h>

int main ()

{

int num, sum = 0;

printf("Enter an integer: \n");
scanf("%d", &num);

while (num != 0)
{
    sum += num % 10;
    num /= 10;
}

printf("The sum of the numbers are: %d\n", sum);

    return 0;
}