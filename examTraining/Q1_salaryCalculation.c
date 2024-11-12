#include <stdio.h>


int determineTaxRate(float salary);
float calculateTax(float salary, int taxRate);
float calculateNetSalary(float salary, float tax);

int main ()

{

    float salary, tax, netSalary;
    int taxRate;

    printf("What is you monthly salary in SEK?\n");
    scanf("%f", &salary);

    taxRate = determineTaxRate(salary);

    tax = calculateTax(salary, taxRate);

    netSalary = calculateNetSalary(salary, tax);

    printf("\nYour tax will be: %.2f kr\n", tax);
    printf("Your salary after taxes will be: %.2f kr\n", netSalary);

    return 0;
}


int determineTaxRate(float salary)

{
 if (salary <= 30000)
  {
    return 1;
  } else if (salary <= 50000)
  {
    return 2;
  } else 
  {
    return 3;
  }
}

float calculateTax(float salary, int taxRate) 
{
    float tax = 0.0;
    switch (taxRate) 
    {
        case 1:
            tax = salary * 0.20;
            break;
        case 2:
            tax = salary * 0.30;
            break;
        case 3:
            tax = salary * 0.35;
            break;
        default:
            printf("Invalid salary input.\n");
            break;
    }
    return tax;
}


float calculateNetSalary(float salary, float tax)

{
    return salary - tax;
}