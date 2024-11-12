#include <stdio.h>

int main() 
{
    int rows = 0;
    int columns = 0;
    int height = 0;

    printf("What's your number of rows?\n");
    scanf("%d", &height);

    for (rows=1;rows<=height;rows++)
        {
            for(columns=1;columns<= (height * 2) -1;columns++)
            {
                if(columns >= height - (rows - 1) && columns <= height + (rows - 1))
                printf("*");
                else
                printf(" ");

            }

            printf("\n");
        }

}


