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

     fprintf(fptr, "Hello world, from inside the file.\n");

   fclose(fptr);
       printf("Go check the contents of the file we've written to.\n");
    printf("When you're done, press the ENTER key in this terminal.\n");
    getchar();

    
    fptr = fopen("my_file.txt", "a");

    
    if (fptr == NULL) {
        printf("Error!, where is the file?\n");
        return 1;
    }

    fprintf(fptr, "This should be the second line in the text file.\n");
    fclose(fptr);

    printf("Added text in file\n");

    return 0;
}