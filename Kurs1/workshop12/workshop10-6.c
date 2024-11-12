#include <stdio.h>

float average3(float num1, float num2, float num3);


int main() 
{

int x, y, z;


    printf("What's your first integer?\n");
    scanf("%d", &x);

    printf("What's your second integer?\n");
    scanf("%d", &y);

    printf("What's your third integer?\n");
    scanf("%d", &z);

    average3(x,y,z);

    return 0;
}

float average3(float num1, float num2, float num3)
{
5
7

    float result = (num1+num2+num3)/3.0;
    printf("(%.2f + %.2f + %.2f) = %.2f", num1, num2, num3, result);

    return result;
    
}
