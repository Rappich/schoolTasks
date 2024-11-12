#include <stdio.h>

int main() {
    char lowercase; 
    char uppercase;  

    printf("Enter a lowercase letter: ");
    scanf(" %c", &lowercase); 

    if (lowercase >= 'a' && lowercase <= 'z') {
        uppercase = lowercase - ('a' - 'A');   // ('a' - 'A' or 'z' - 'Z') = -32
        // an uppercase letter between a-z is always 32 less than a lowercase, u can instead write -32 and get the same value

        printf("The uppercase letter is: %c\n", uppercase);
    } else {
        printf("Error: You must enter a lowercase letter.\n");
    }

    return 0;
}
