#include <stdio.h>

float celsiusToFahrenheit(float celsius);
void minMax(float storedTempsFahrenheit[], int count, float* min, float* max);


int main ()

{
    int n;

    printf("How many temps do you want to convert from C to F?\n");
    scanf("%d", &n);

    float storedTempsCelsius[n];
    float storedTempsFahrenheit[n];
    
    for (int i = 0;i<n; i++)
    {
        printf("What's the temp in Celsius?\n");
        scanf("%f", &storedTempsCelsius[i]);
    }

    for (int i = 0; i<n;i++)
    {
        storedTempsFahrenheit[i] = celsiusToFahrenheit(storedTempsCelsius[i]);
    }

    float min, max;
    minMax(storedTempsFahrenheit, n, &min, &max);

    printf("Min = %.2f\n", min);
    printf("Max = %.2f\n", max);
    
    return 0;
}

float celsiusToFahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

void minMax(float storedTempsFahrenheit[], int count, float* min, float* max)

{
    *max = storedTempsFahrenheit[0];
    *min = storedTempsFahrenheit[0];

    for(int i = 1;i < count; i++)
    {
        if(storedTempsFahrenheit[i]> *max) 
        {
            *max = storedTempsFahrenheit[i];
        }
        if(storedTempsFahrenheit[i]< *min)
        {
            *min = storedTempsFahrenheit[i];
        }
    }
}