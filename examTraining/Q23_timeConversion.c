#include <stdio.h>

void convertSeconds(int seconds);

int main() 
{
    int totalSeconds;

    printf("Enter total amount of seconds: \n");
    scanf("%d", &totalSeconds);
    
    convertSeconds(totalSeconds);

    return 0;
}

void convertSeconds(int seconds) 
{
    const int SECONDS_IN_MINUTE = 60;
    const int SECONDS_IN_HOUR = 3600;
    const int SECONDS_IN_DAY = 86400;
    int days;
    int hours;
    int minutes;

    days = seconds / SECONDS_IN_DAY;
    seconds = seconds - (days * SECONDS_IN_DAY); 

    hours = seconds / SECONDS_IN_HOUR;
    seconds = seconds - (hours * SECONDS_IN_HOUR);

    minutes = seconds / SECONDS_IN_MINUTE;
    seconds = seconds - (minutes * SECONDS_IN_MINUTE);

    int totalAmountOfSeconds = (days * SECONDS_IN_DAY) + (hours * SECONDS_IN_HOUR) + (minutes * SECONDS_IN_MINUTE) + seconds;
    
    printf("%d seconds is equivalent to:\n", totalAmountOfSeconds);
    printf("%d days, %d hours, %d minutes, and %d seconds\n", days, hours, minutes, seconds);
}
