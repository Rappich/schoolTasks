#include <stdio.h>

int main() {
    
    int a = 2;
    int r = a;

    printf("\nInitial value of R: %i", r);

    r += a;
    printf("\nAfter addition assignment (r += a): %i", r);

    r -= a;
    printf("\nAfter subtraction assignment (r -= a): %i", r);

    r *= a;
    printf("\nAfter multiplication assignment (r *= a): %i", r);

    r /= a;
    printf("\nAfter division assignment (r /= a): %i", r);

    r %= a;
    printf("\nAfter modulus assignment (r %= a): %i", r);

    return 0;
}