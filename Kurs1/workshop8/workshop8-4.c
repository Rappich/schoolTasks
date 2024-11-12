#include <stdio.h>

int main ()

{

int table;
int count;
int result = 0;

printf("What multiplication table to you want to use?\n");
scanf("%d", &table);

for (count = 1; count <= 10; count++) 
{
    result = count * table;
printf("%d * %d = %d \n",table, count,result);

}

    return 0;
}