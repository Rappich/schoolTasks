#include <stdio.h>
#include <string.h>

int main ()

{

    char storedPassword[] = {"CoolBoy97"};
    char storedUserName[] = {"Misterman"};
    char inputPassword[50];
    char inputUserName[50];

        printf("Input Username:\n");
        scanf("%s", inputUserName);

        printf("Input Password:\n");
        scanf("%s", inputPassword);

        if ((strcmp(storedPassword, inputPassword) == 0) && (strcmp(storedUserName, inputUserName) == 0))
        {
        printf("Login successfull\n");
        } else
        {
        printf("Password or username doesn't exist, try again\n");
        }

    return 0;
}
