#include <stdio.h>

#define a 10
#define b 20
#define c 30
#define d 40

int main()

{

printf("We'll be calculating withe the predetermed variable (a: 10, b: 20, c: 30, d: 40 )\n\n");


    printf("\nFirst calculation: a + b / c + d ");
    printf("\nResult: %d\n", a + b / c + d);

    printf("\nFirst calculation: (a + b) / c + d \n");
    printf("\nResult: %d\n", (a + b) / c + d);

    printf("\nExpression: a + b / (c + d) \n");
    printf("\nResult: %d\n",a + b / (c + d));

    printf("\nExpression: (a + b) / (c + d) \n");
    printf("\nResult: %d\n", (a + b) / (c + d) );


}