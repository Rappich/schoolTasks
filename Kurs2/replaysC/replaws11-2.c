#include <stdio.h>
int main() {
int test;
int *pInt = 0;
test = 10;

printf("\nTest's value = %i", test );

printf("\nTest's address as integer = %u", &pInt); 

printf("\nTest's address in hexadecimal format = %p", &pInt );

pInt = &test;

printf("%d\n", *pInt);
printf("%u\n", &pInt);
printf("%p\n", &pInt);

*pInt = 15;
printf("\nNow, test's value = %i", test);
return 0;
}