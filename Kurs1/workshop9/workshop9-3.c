#include <stdio.h>

int main() {
    int array[5];
    int i = 0;
    int length = 5;

    printf("Enter 5 integer numbers:\n");
    while (i < length) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &array[i]);
        i++;
    }

    i = 0;

    printf("The content of the array is: ");
    while (i < length) 
    {
        printf("%d, ", array[i]);
        i++;
    }

    return 0;
}
