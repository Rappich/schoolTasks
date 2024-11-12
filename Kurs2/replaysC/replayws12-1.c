#include <stdio.h>

struct student
{
    int roll_no;
    char name[40];
};

int main ()

{
    struct student s;
    s.roll_no = 123;
    s.name = "kim";

    printf("%d", s.roll_no);
    printf("%s", s.name);

    return 0;
}