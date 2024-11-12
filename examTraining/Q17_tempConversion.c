#include <stdio.h>


float celsiusToFahrenheit(float celsius);

float celsiusToKelvin(float celsius);

int main() 
{
    float celsius, fahrenheit, kelvin;


    printf("Ange temperaturen i Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);
    kelvin = celsiusToKelvin(celsius);

   
    printf("Temperatur i Celsius: %.2f °C\n", celsius);
    printf("Temperatur i Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Temperatur i Kelvin: %.2f K\n", kelvin);

    return 0;
}


float celsiusToFahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

float celsiusToKelvin(float celsius) 
{
    return celsius + 273.15;
}