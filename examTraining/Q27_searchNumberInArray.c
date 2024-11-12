#include <stdio.h>

int main() 
{
    int arr[10];
    int numberToFind;
    int found = 0;  
    int index = -1; 

    printf("Mata in 10 heltal:\n");
    for (int i = 0; i < 10; i++) {
        printf("Tal %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Ange ett tal att söka efter: ");
    scanf("%d", &numberToFind);


    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] == numberToFind) 
        {
            found = 1; 
            index = i;  
            break;      
        }
    }

    if (found) 
    {
        printf("Talet %d hittades på indexposition %d.\n", numberToFind, index);
    } else {
        printf("Talet %d hittades inte i arrayen.\n", numberToFind);
    }

    return 0;
}
