#include <stdio.h>

int main() {
    int amountOfInputs;               
    char continueProgram;            
    int arr[1000];                    
    int total;                        
    float avg;                        
    int loopIndex;                    


    while (1) {
        total = 0;  

        printf("How many numbers do you want to calculate the average of? (max 1000)\n");
        scanf("%d", &amountOfInputs);

        if (amountOfInputs > 1000) 
        {
            printf("Input exceeds the maximum limit of 1000. Please try again.\n");
            continue;
        }

        printf("Enter your numbers:\n");
        for (loopIndex = 0; loopIndex < amountOfInputs; loopIndex++) 
        {
            printf("Number %d: ", loopIndex + 1);
            scanf("%d", &arr[loopIndex]);
        }

        for (loopIndex = 0; loopIndex < amountOfInputs; loopIndex++) 
        {
            total += arr[loopIndex];
        }


        avg = total / (float)amountOfInputs;

        printf("The sum is: %d\n", total);
        printf("The average is: %.2f\n", avg);


        printf("Do you want to enter another set of numbers? (y/n): ");
        scanf(" %c", &continueProgram);

 
        if (continueProgram != 'y' && continueProgram != 'Y') 
        {
            break;
        }
    }

    return 0;
}
