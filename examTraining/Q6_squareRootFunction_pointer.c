#include <stdio.h>
#include <math.h>

int main ()

{
    float number;
    float originalNumber;

    printf("Enter a positive number: \n");
    scanf("%f", &number);

    originalNumber = number;

    calculateSquareRoot(&number);
    printf("The original number was %.2f\n", originalNumber);
    printf("The square root of the number is: %.2f\n", number);
    return 0;
}

void calculateSquareRoot(float *number)

{
    if (*number >= 0)
    {
        *number = sqrt(*number);
    } 
    
    else

    {
        printf("What are you doing? Number needs to be positive ffs...\n");
    }
}