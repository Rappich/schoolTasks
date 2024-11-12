#include <stdio.h>

typedef struct student
{
    int roll_no;
    char name[40];
} student;

int amountOfInputs;

int main()
{


    printf("How many students do you want to input?\n");
    scanf("%d", &amountOfInputs);


    student students[amountOfInputs];

    for (int i = 0; i < amountOfInputs; i++)

    {
        printf("Enter information for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
    }

    for (int i = 0;i < amountOfInputs; i++)

    {
        printf("Student %d \nName = %s\n Roll number = %d\n",i+1,students[i].name,students[i].roll_no);
    }

    return 0;
}
