#include <stdio.h>

int main() {
    char fullName[100];

    printf("Enter your full name (first and last): ");

    fgets(fullName, sizeof(fullName), stdin);

    printf("Your full name is: %s", fullName);

    return 0;
}
