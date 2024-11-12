#include <stdio.h>

typedef struct student
{
    int roll_no;
    char name[40];
} student;


int main()

{
    student s1,s2;
    
    printf("What's the first students name??\n");
    scanf("%s", s1.name);

    printf("What's the first students number?\n");
    scanf("%d", &s1.roll_no);

    printf("What's the second students name??\n");
    scanf("%s", s2.name);

    printf("What's the second students number?\n");
    scanf("%d", &s2.roll_no);

    printf("Student 1: %d, %s\n", s1.roll_no, s1.name);

    
    printf("Student 2: %d, %s\n", s2.roll_no, s2.name);

    return 0;


}

// Uppgift 2: Reuse the structure 'student' and give it an alias using typedef.
// - Use the structure 'student' as an alias.
// - In the main program:
//   - Create two variables (s1 and s2) of type 'student'.
//   - Prompt the user for student 1's roll_no and name.
//   - Prompt the user for student 2's roll_no and name.
//   - Print student 1's roll_no and name, followed by student 2's roll_no and name.