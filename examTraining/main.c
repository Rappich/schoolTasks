#include <stdio.h>
#include "temp_conversion.h"

int main() {
    char choice;
    do {
        int fromUnit, toUnit;
        float temperature, convertedTemperature;

        printf("Temperature Conversion Menu:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Celsius to Kelvin\n");
        printf("3. Fahrenheit to Celsius\n");
        printf("4. Kelvin to Celsius\n");
        printf("Choose the conversion (1-4): ");
        scanf("%d", &fromUnit);

        printf("Enter the temperature to convert: ");
        scanf("%f", &temperature);

        switch (fromUnit) 
        {
            case 1:
                convertedTemperature = celsiusToFahrenheit(temperature);
                printf("%.2f Celsius is %.2f Fahrenheit.\n", temperature, convertedTemperature);
                break;
            case 2:
                convertedTemperature = celsiusToKelvin(temperature);
                printf("%.2f Celsius is %.2f Kelvin.\n", temperature, convertedTemperature);
                break;
            case 3:
                convertedTemperature = fahrenheitToCelsius(temperature);
                printf("%.2f Fahrenheit is %.2f Celsius.\n", temperature, convertedTemperature);
                break;
            case 4:
                convertedTemperature = kelvinToCelsius(temperature);
                printf("%.2f Kelvin is %.2f Celsius.\n", temperature, convertedTemperature);
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
                continue; 
        }

        printf("Do you want to perform another conversion? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the temperature converter!\n");
    return 0;
}
