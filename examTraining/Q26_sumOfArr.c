#include <stdio.h>

    int sumOfArr(int arr[], int lengthOfArr);

int main  ()

{

    int arr[5];
    int sum;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter an integer please: \n");
        scanf("%d", &arr[i]);


    }
    sum = sumOfArr(arr, 5);
    printf("The sum of the array elements is: %d\n", sum);
    return 0;

}
    int sumOfArr(int arr[], int lengthOfArr)
    {

        if (lengthOfArr == 0)
        {
            return 0;
        }
        else
        {
            return arr[lengthOfArr - 1] + sumOfArr(arr, lengthOfArr - 1);
        }
    }
