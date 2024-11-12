#include <stdio.h>

#define PI 3.1416

int main() {
    float diameter, radius, height, volume;
 
    printf("Enter the diameter of the cylinder: ");
    scanf("%f", &diameter);

    radius = diameter / 2;

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    printf("The volume of the cylinder is %.2f cubic units.\n", volume);

    return 0;
}
