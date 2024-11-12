#include <stdio.h>

float temp;
float result;

int celsiusToFahrenheit() 
{
    result = (temp * 9.0 / 5.0) + 32;  
    printf("%.2f Celsius = %.2f Fahrenheit\n", temp, result); 
    return 0;
}

int fahrenheitToCelsius() 
{
    result = (temp - 32) * 5.0 / 9.0;  
    printf("%.2f Fahrenheit = %.2f Celsius\n", temp, result);
    return 0;
}

int celsiusToKelvin()
{
    result = temp + 273.15;
    printf("%.2f Celsius = %.2f Kelvin\n", temp, result);
    return 0;
}

int kelvinToCelsius()
{
    result = temp - 273.15;
    printf("%.2f Kelvin = %.2f Celsius\n", temp, result);
    return 0;
}

int fahrenheitToKelvin()
{
    result = (temp - 32) * 5.0 / 9.0 + 273.15;
    printf("%.2f Fahrenheit = %.2f Kelvin\n", temp, result);
    return 0;
}

int kelvinToFahrenheit()
{
    result = (temp - 273.15) * 9.0 / 5.0 + 32;
    printf("%.2f Kelvin = %.2f Fahrenheit\n", temp, result);
    return 0;
}

int main() {
    char choice;
    int scaleFrom, scaleTo;

    while (1) 
    {
        printf("Convert temperature from:\n1. Celsius\n2. Fahrenheit\n3. Kelvin\nEnter your choice: ");
        scanf("%d", &scaleFrom);

        if (scaleFrom != 1 && scaleFrom != 2 && scaleFrom != 3) 
        {
            printf("Invalid choice. Exiting.\n");
            break;
        }

        printf("Enter the temperature: ");
        scanf("%f", &temp);

        printf("Convert to:\n1. Celsius\n2. Fahrenheit\n3. Kelvin\nEnter your choice: ");
        scanf("%d", &scaleTo);

        if (scaleFrom == 1 && scaleTo == 2) 
        {
            celsiusToFahrenheit();
        } 
        else if (scaleFrom == 2 && scaleTo == 1) 
        {
            fahrenheitToCelsius();
        } 
        else if (scaleFrom == 1 && scaleTo == 3) 
        {
            celsiusToKelvin();
        } 
        else if (scaleFrom == 3 && scaleTo == 1) 
        {
            kelvinToCelsius();
        } 
        else if (scaleFrom == 2 && scaleTo == 3) 
        {
            fahrenheitToKelvin();
        } 
        else if (scaleFrom == 3 && scaleTo == 2) 
        {
            kelvinToFahrenheit();
        } 
        else 
        {
            printf("Invalid conversion.\n");
        }

        printf("Do you want to perform another conversion (y/n)? ");
        scanf(" %c", &choice);

        if (choice != 'y') 
        {
            break;
        }
    }

    return 0;
}
