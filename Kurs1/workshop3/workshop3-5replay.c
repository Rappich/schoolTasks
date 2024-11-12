#include <stdio.h>

int main()
{

float num1, num2, add, subt, multi, divi;

printf("Skriv in ditt första heltal\n");
scanf("%f", &num1);
printf("Skriv in ditt andra heltal\n");
scanf("%f", &num2);

    add = num1 + num2;
    subt = num1 - num2;
    multi = num1 * num2;
    
if (num2 != 0) {
 divi = num1 / num2;
        printf("Ditt resultat är:\n");
        printf("Addition: %.2f\n", add);
        printf("Subtraction: %.2f\n", subt);
        printf("Multiplication: %.2f\n", multi);
        printf("Division: %.2f\n", divi);
    } else {
        printf("Ops, du kan inte dela med 0, försök igen \n");
    }
  
return 0;

}