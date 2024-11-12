
#include <stdio.h>
typedef struct student
{
int roll_no;
char name[40];
} student;
int main()
{


student students[3] = 
{
{123, "Kim"},
{213, "Abdul"},
{321, "Charles"}
};


int i;
for( i = 0; i < 3; i++ )
{
printf("\nStudent %d\nRoll number = %d\nName = %s\n", i+1,
students[i].roll_no, students[i].name);
}
return 0;
}

