#include <stdio.h>

int main ()

{
int a;
float b;
double c;
char d;


    int *ptr1 = &a;
    float *ptr2 = &b;
    double *ptr3 = &c;
    char *ptr4 = &d;

    printf("size of (a) = %lu bytes\n", sizeof(a));
    printf("\nsize of (a) pointer = %lu bytes\n", sizeof(*ptr1));

    printf("\nsize of (b) = %lu bytes\n", sizeof(b));
    printf("\nsize of (b) pointer = %lu bytes\n", sizeof(*ptr2));

    printf("\nsize of (c) = %lu bytes\n", sizeof(c));
    printf("\nsize of (c) pointer = %lu bytes\n", sizeof(*ptr3));

    printf("\nsize of (d) = %lu bytes\n", sizeof(d));
    printf("\nsize of (d) pointer = %lu bytes\n", sizeof(*ptr4));


    return 0;
}