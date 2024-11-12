#include <stdio.h>
#define PI 3.1416

int main() {

float radius, diameter, perimeter, area;

printf("We'll be calculating the area and perimiter of a circle.\n");
printf("What's the radius of the circle?\n");
scanf("%f", &radius);


perimeter = 2 * PI * radius;
area = PI * radius * radius;

printf("The circles perimeter is %.2f \n", perimeter);
printf("The circles area is %.2f \n", area);

return 0;

}
