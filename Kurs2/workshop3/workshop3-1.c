#include <stdio.h>
#include <stdlib.h>

int main ()

{

    FILE *fptr;
    fptr = fopen("C:\\chas\\SUVx24\\Kurs 2\\my_file.txt", "w");

     if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   } else 
   {
    printf("Fount it!");   
   }
}