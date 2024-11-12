#include <stdio.h>
#include <math.h>

void calculateArea(float radius);

void calculateCircumference(float radius);

int main ()

{
    float radius;

    printf("What's the radius of the circle?\n");
    scanf("%f", &radius);

    calculateArea(radius);
    calculateCircumference(radius);

    return 0;
}

void calculateArea(float radius)

{
    float area = M_PI * radius * radius;
    printf("Area of the circle with radius %.1f: %.2f\n", radius, area);
}

void calculateCircumference(float radius)

{
    float circumference = 2 * M_PI * radius;
    printf("Circumference of the circle with radius %.1f: %.2f\n", radius, circumference);    
}