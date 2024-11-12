#include <stdio.h>

int return143() 
{
    return 143;
}

int main() {

    int n = 0;

    printf("Value before: %d\n", n);

    n = return143();

    printf("Value after: %d\n", n);

    return 0;
}


