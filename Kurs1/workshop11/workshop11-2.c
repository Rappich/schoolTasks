#include <stdio.h>
int main() 
{
int test;
int *pInt = 0;
test = 10;


printf("\nTest's value = %i", test);
printf("\nTest's address as integer = %u", &test); 
printf("\nTest's address in hexadecimal format = %p", &test); 


pInt = &test;

printf("\n%d", *pInt);
printf("\n%u", &pInt);
printf("\n%p", &pInt);

*pInt = 15;

("\nNow, test's value = %i",*pInt );
return 0;

}

