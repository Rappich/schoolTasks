#include <stdio.h>

struct student
{
    int roll_no;
    char name[40];
};


int main()

{
    struct student s;

    s.roll_no = 123;
    strcpy(s.name, "Kim");

    printf("%d\n", s.roll_no);
    printf("%s\n", s.name);

    return 0;


}