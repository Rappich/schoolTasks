#include <stdio.h>

int main ()

{

int number;

for (number = 1; number <= 100; number++) 
{
  if (number % 2 == 0) 
        {
            printf("Even number = %d\n", number);
        }

}
for (number = 1; number <= 100; number++) 
{
 if (number % 2 != 0) 
        {
            printf("Odd number = %d\n", number);
        }
    
}

    return 0;
}
