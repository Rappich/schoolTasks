#include <stdio.h>

int main() 
{

    int a, b, temp;

    printf("First integer (a) = ");
    scanf("%d", &a);
    printf("Second integer (b) = ");
    scanf("%d", &b);

    printf("Before change: a = %d, b = %d\n", a, b);

    // Byt plats på a och b
    temp = a;  // Spara värdet av a i temp
    a = b;     // Sätt a till värdet av b
    b = temp;  // Sätt b till värdet av temp (ursprungliga värdet av a)

    printf("after change: a = %d, b = %d\n", a, b);

    return 0;
}
