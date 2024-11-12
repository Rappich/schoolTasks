#include <stdio.h>
#include <stdbool.h>
int main () {
     double numUnits, total, CallsRem, remUnits1, remUnits2,remUnits3;
    printf("Ange antalet enheter nedan:\n");
    scanf("%lf", &numUnits);
    bool cat1 = numUnits <= 100;
    bool cat2 = numUnits >= 101 && numUnits <= 200;
    bool cat3 = numUnits >= 201 && numUnits <= 500;
    bool cat4 = numUnits > 501;
    if (cat1)
    {
        total = numUnits * 0.25;
        printf("\nDu faller under första kategorin, din totalsumma är: %.2f kr", total);
    }
    else if (cat2)
    {
        CallsRem = numUnits - 100;
        remUnits1 = numUnits - CallsRem;
        total = CallsRem*0.75+remUnits1*0.25;
        printf("\nDu faller under andra kategorin, din totalsumma är: %.2lf kr", total);
    }
    else if (cat3)
    {
        CallsRem = numUnits - 200;
        remUnits1 = 100;
        remUnits2 = 100;
        total = CallsRem*1.50+remUnits1*0.75+remUnits2*0.25;
        printf("\nDu faller under tredje kategorin, din totalsumma är: %.2lf kr", total);
    }
    else if (cat4)
    {
        CallsRem = numUnits - 500;
        remUnits1 = 300;
        remUnits2 = 100;
        remUnits3 = 100;
        total = CallsRem*4.00+remUnits1*1.50+remUnits2*0.75+remUnits3*0.25;
        printf("\nDu faller under fjärde kategorin, din totalsumma är: %.2lf kr", total);
    }
    else
    {
        printf("\nNågot gick fel försök igen.");
    }
}
