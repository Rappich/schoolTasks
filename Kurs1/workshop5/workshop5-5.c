#include <stdio.h>

int main() {
    int enheter;
    float totalKostnad = 0.0;

    printf("Ange antal konsumerade enheter: ");
    scanf("%d", &enheter);

    if (enheter > 500) {
        totalKostnad += (enheter - 500) * 4.0;
        enheter = 500; 
    }
  
    if (enheter > 200) {
        totalKostnad += (enheter - 200) * 1.50;
        enheter = 200;
    }
    if (enheter > 100) {
        totalKostnad += (enheter - 100) * 0.75;
        enheter = 100; 
    }


    totalKostnad += enheter * 0.25;

    printf("Det totala elpriset är: %.2f kr\n", totalKostnad);

    return 0;
}