#include <stdio.h>

int main()
#define PI 3.1416

{

float radius, perimeter, area;

printf("We'll be calculating the area and perimiter of a circle.\n");
printf("What's the radius of the circle?\n");
scanf("%f", &radius);

perimeter = 2 * PI * radius;
area = PI * radius * radius;

printf("The circles perimeter is %.2f units\n", perimeter);
printf("The circles area is %.2f units\n", area);

}