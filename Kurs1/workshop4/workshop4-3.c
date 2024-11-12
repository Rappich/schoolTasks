#include <stdio.h>

#define A 24
#define B 15
#define C 33

int main ()

{

printf("\n We'll be comparing the following variables: A (24), B (15) and C (33)\n\n");


    printf("Expression: A is bigger than B AND A is less than C\n");
    printf("Result: %d\n\n", (A < B) && (A > C));

    printf("Expression: A is less than B OR A is bigger than C\n");
    printf("Result: %d\n\n", (A < B) || (A > C));

    printf("Expression:(A is less than B AND A is bigger than C) is not true\n");
    printf("Result: %d\n\n", !((A < B) && (A > C)));

    printf("Expression: (A is less than B OR A is bigger than C) is not true\n");
    printf("Result: %d\n\n", !((A < B) || (A > C)));

    return 0;
}