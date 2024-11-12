#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 99) 
    {
        if (i % 2 != 0) 
        {
            i++;
            continue;
        }
        printf("Even number = %d\n", i);
        i++;
    }

    i = 1;

    
    while (i <= 99) 
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        printf("Odd number = %d\n", i);
        i++;
    }

    return 0;
}

