#include <stdio.h>


void cubeVolume(float length); 

int main() 
{
    float l;


    printf("What's the length of the cube?\n");
    scanf("%f", &l);

   
    cubeVolume(l);

    return 0;
}


void cubeVolume(float length) 
{
    float volume = length * length * length;
    printf("The volume of the cube = %.2f units\n", volume); 
}
