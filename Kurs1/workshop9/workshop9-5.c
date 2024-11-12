#include <stdio.h>


int arr[1000];      
int n;              
int min, max;       
int index;          


int findMinMax() 
{
    min = arr[0];
    max = arr[0];
    
    for (index = 1; index < n; index++) 
    {
        if (arr[index] < min) 
        {
            min = arr[index];
        }
        if (arr[index] > max) 
        {
            max = arr[index];
        }
    }
    
    printf("Minimum value in the array is: %d\n", min);
    printf("Maximum value in the array is: %d\n", max);
}

int main() 
{
    printf("Enter the size of the array: ");
    scanf("%d", &n);  
    
    printf("Enter the elements of the array:\n");
    for (index = 0; index < n; index++) 
    {
        scanf("%d", &arr[index]);  
    }
    
    findMinMax();

    return 0;  
}
