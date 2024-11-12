#include <stdio.h>

void minMax(int arr[], int size, int *min, int *max);

int main() {
    int arr[5];
    int min; 
    int max;    

    for (int i = 0; i < 5; i++) {
        printf("Type an integer: \n");
        scanf("%d", &arr[i]); 
    }

    minMax(arr, 5, &min, &max); 

    for (int i = 0; i < 5; i++) {
        printf("Your numbers are %d\n", arr[i]);
    }

    printf("Minimum number is: %d\n", min);
    printf("Maximum number is: %d\n", max);

    return 0;
}

void minMax(int arr[], int size, int *min, int *max) { 
    *max = arr[0]; 
    *min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i]; 
        }
    }
}
