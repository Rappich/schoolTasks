#include <stdio.h>

typedef struct student
{
    int roll_no;
    char name[40];
} Student;

int n;

int main() 
{

    printf("How many students do you want to add\n");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) 
    {
        printf("Name of student %d: \n", i + 1);
        scanf("%s", students[i].name);
        getchar();

        printf("Roll number of student %d: \n", i + 1);
        scanf("%d", &students[i].roll_no);
        getchar();
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Student %d Roll Number: %d\n", i + 1, students[i].roll_no);
        printf("Student %d Name: %s", i + 1, students[i].name);
    }

    return 0;
}
