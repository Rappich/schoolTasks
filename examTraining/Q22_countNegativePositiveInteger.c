#include <stdio.h>

int main ()

{
    int arr[10];
    int positiveCount = 0;
    int negativeCount = 0;
    

    for (int i = 0; i < 10; i++)
        {
            printf("Integer please: \n");
            scanf("%d", &arr[i]);
        }
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else if (arr[i] > 0)
        {
            positiveCount++;
        } 

        else

        {
            negativeCount++;
        }
    }

    printf("Total positive numbers: %d\n", positiveCount);
    printf("Total negative numbers: %d\n", negativeCount);

    return 0;
}