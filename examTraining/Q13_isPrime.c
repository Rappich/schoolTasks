#include <stdio.h>
#include <math.h>

int main() 
{
    int n, isNotPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1) 
    {
        printf("1 is neither prime nor composite.\n");
    }
    else 
    {
        isNotPrime = 0;

        for (int i = 2; i <= sqrt(n); ++i) 
        {
            if (n % i == 0) 
            {
                isNotPrime = 1; 
                break; 
            }
        }

        if (isNotPrime)
            printf("%d is not a prime number.\n", n);
        else
            printf("%d is a prime number.\n", n);
    }

    return 0;
}
