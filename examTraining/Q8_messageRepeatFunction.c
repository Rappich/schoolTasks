#include <stdio.h>

int main ()

{
    int amount = 0;
    char message[50];

    printf("How many times do you want to print the message?\n");
    scanf("%d", &amount);
    getchar();

    printf("What do you want to say?\n");
    fgets(message,sizeof(message),stdin);

    for(int i = 1; i < amount;i++)
    {
        printf("%s", message);
    }
    
    return 0;
}