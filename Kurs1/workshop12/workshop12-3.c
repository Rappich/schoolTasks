#include <stdio.h>


typedef struct student
{
    int roll_no;
    char name[40];
} student;

int main()

{
  

    student students[3];

    strcpy(students[0].name,"Kim");
    students[0].roll_no = 123;

    strcpy(students[1].name,"Abdult");
    students[1].roll_no = 213;

    strcpy(students[2].name,"Charles");
    students[2].roll_no = 321;


    for (int i = 0; i < 3; i++)

    {
        printf("Student %d \nName = %s\n Roll number = %d\n",i+1,students[i].name,students[i].roll_no);
    }

    return 0;
}
