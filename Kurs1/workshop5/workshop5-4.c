#include <stdio.h>

int main()

{

int A;

printf("Write the an integer \n");
scanf("%d", &A);

if (A % 2) {
        printf("Your integer is odd\n");
} else {
        printf("Your integer is even\n");
} 
return 0;

}