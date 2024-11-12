#include <stdio.h>

int main() 
{
    int height;
    int rows = 0;
    int columns = 0;
    int starCount;
    int spaceCount;

    printf("Enter height: \n");
    scanf("%d", &height);

    for (rows = 1; rows <= height; rows++)
    {
        starCount = (rows * 2) - 1;
        spaceCount = height - rows;

        for (columns = 0; columns < spaceCount; columns++)
        {
            printf(" ");
        }

        for (columns = 0; columns < starCount; columns++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



