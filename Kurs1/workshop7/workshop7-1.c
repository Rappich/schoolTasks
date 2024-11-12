#include <stdio.h>

int main() {
    int i = 0;
    int timesPrinted = 0;

    printf("How many times do you want to print your name?\n");
    scanf("%d", &timesPrinted);

  
    while (i < timesPrinted) {
        printf("Fredrik Mårtensson\n");
        i++; 
    }

    return 0;
}
