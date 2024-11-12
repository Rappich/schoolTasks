#include <stdio.h>

int main()

{
    int length, width, area, perimeter;
    
    printf("What is the lenght of the rectangle?\n");
    scanf("%d", &length);
    printf("What is the width of the rectangle?\n");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2*(width + length);

    printf("The rectangles area is %i\n", area);
    printf("The rectangles perimeter is %i\n", perimeter);

    return 0;
}
