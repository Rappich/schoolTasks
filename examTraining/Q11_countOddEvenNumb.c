#include <stdio.h>

int main ()

{
    int arr[10];
    int evenCount = 0;
    int oddCount = 0;
    

    for (int i = 0; i < 10; i++)
        {
            printf("Integer please: \n");
            scanf("%d", &arr[i]);
        }
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        } 

        else

        {
            oddCount++;
        }
    }

    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}