#include <stdio.h>

int main() 
{
    int height;
    int rows = 0;
    int columns = 0;

    printf("How many rows do you want?\n");
    scanf("%d", &height);

    for (rows = 1; rows <= height; rows++)
    {
        for (columns = 1; columns <= rows; columns++)
        {
            printf("        %d ", columns);
        }
        printf("\n"); 
    }
    
    return 0;
}
