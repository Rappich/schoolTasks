#include "temp_conversion.h"

// Funktioner för temperaturkonvertering
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;  // Konverterar Celsius till Fahrenheit
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;  // Konverterar Celsius till Kelvin
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;  // Konverterar Fahrenheit till Celsius
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;  // Konverterar Kelvin till Celsius
}
