#include <stdio.h>

int main()
{

float width, length, perimeter, area ;

printf("Enter the length of the rectangle:\n");
scanf("%f", &length);
printf("Enter your second integer:\n");
scanf("%f", &width);

perimeter = (width + length)*2;
area = width * length;

printf ("The area is %.2f \n", area);
printf ("The perimeter is %.2f \n", perimeter);


}