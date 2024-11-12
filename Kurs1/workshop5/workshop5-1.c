#include <stdio.h>

int main()

{

int A, B;

printf("Write the first integer \n");
scanf("%d", &A);
printf("Write the second integer \n");
scanf("%d", &B);

if (A > B) {
        printf("Your first integer is higher than your second\n");
} else if (A < B) {
        printf("Your second integer is higher than your first\n");
} else if (A == B) {
        printf("Both integers are equal\n");

    }
return 0;

}