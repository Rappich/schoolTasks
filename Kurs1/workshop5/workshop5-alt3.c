#include <stdio.h>

int main() {

int units;
float bill = 0;

printf("\nProgram to produce an elecricity bill.");
printf("\nEnter number of units consumed: ");
scanf("%i", &units);

if(units <= 100)
{
bill = units * 0.25;
}
else if (units <= 200)
{
bill = 25 + (units - 100) * 0.75;
}
else if (units <= 500)
{
bill = 25 + 75 + (units - 200) * 1.5;
}
else
{
bill = 25 + 75 + 450 + (units - 500) * 4;
}
printf("\n%.2f kr is the electricity cost.", bill);
return 0;
}

