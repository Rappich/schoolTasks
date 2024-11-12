#include <stdio.h>

int main() {
    int count = 1;
    int multiTable = 0;
    int result = 0;

    printf("What multiplaction table do you want to use?\n");
    scanf("%d", &multiTable);

  
  while (count <= 10) 
    {
       result = count * multiTable;
            printf("%d * %d = %d\n", count, multiTable, result);
        ++count;
    }
    return 0;
}
