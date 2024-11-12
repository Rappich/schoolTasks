#include <stdio.h>
#include <stdlib.h>

int main() {
    int amountOfInputs;               
    char continueProgram;               
    int *ptr;                       
    int total = 0;              
    float avg;               
    int loopIndex;               

    while (1) 
    {
        
        printf("How many numbers do you want to calculate the average of?\n");
        scanf("%d", &amountOfInputs);

        ptr = (int*)malloc(amountOfInputs * sizeof(int));
        if (ptr == NULL) 
        {
            printf("Memory allocation failed!\n");
            return 1;  
        }


        printf("Enter your numbers:\n");
        for (loopIndex = 0; loopIndex < amountOfInputs; loopIndex++) 
        {
            printf("Number %d: ", loopIndex + 1);
            scanf("%d", &ptr[loopIndex]);
        }

       
        for (loopIndex = 0; loopIndex < amountOfInputs; loopIndex++) 
        {
            total += ptr[loopIndex];
        }
        avg = total / (float)amountOfInputs;

        printf("The sum is: %d\n", total);
        printf("The average is: %.2f\n", avg);

        free(ptr);


        printf("Do you want to enter another set of numbers? (y/n): ");
        scanf(" %c", &continueProgram); 

        if (continueProgram != 'y' && continueProgram != 'Y') 
        {
            break;
        }
    }

    return 0;
}
