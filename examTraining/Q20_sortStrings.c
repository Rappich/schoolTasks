#include <stdio.h>
#include <string.h>

#define MAX_WORDS 5
#define MAX_LENGTH 100

int main() {
    char words[MAX_WORDS][MAX_LENGTH];


    for (int i = 0; i < MAX_WORDS; i++) 
    {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]); 
    }


    for (int i = 0; i < MAX_WORDS - 1; i++) {
        for (int j = 0; j < MAX_WORDS - i - 1; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
     
                char temp[MAX_LENGTH];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nThe sorted words are:\n");
    for (int i = 0; i < MAX_WORDS; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
