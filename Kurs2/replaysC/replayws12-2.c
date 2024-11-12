#include <stdio.h>

typedef struct student
{
    int roll_no;
    char name[40];
} Student;

int main() 
{
    Student students[2];

    for (int i = 0; i < 2; i++) 
    {
        printf("Name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        getchar();
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 2; i++) 
    {
        printf("Student %d Roll Number: %d\n", i + 1, students[i].roll_no);
        printf("Student %d Name: %s", i + 1, students[i].name);
    }

    return 0;
}
