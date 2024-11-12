#include <stdio.h>
#include <math.h>

float calculateSquareRoot(float number);

int main() {
    float number;

    printf("Enter a positive number: ");
    scanf("%f", &number);

    if (number < 0) 
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    float squareRoot = calculateSquareRoot(number);

    printf("The square root of %.2f is %.2f\n", number, squareRoot);

    return 0;
}


float calculateSquareRoot(float number) 
{
    return sqrt(number);
}