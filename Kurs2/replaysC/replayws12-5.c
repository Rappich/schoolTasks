#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
};

struct emp
{
    int no;
    char name[30];
    struct date join_date;
};

int n;

int main() 
{
    printf("How many employees do you want to add?\n");
    scanf("%d", &n);
    
    struct emp Emp[n]; 

    for (int i = 0; i < n; i++)
    {
        printf("Name of employee %d: \n", i + 1);
        scanf("%s", Emp[i].name);
        getchar();

        printf("Number of employee %d: \n", i + 1);
        scanf("%d", &Emp[i].no);
        getchar();

        printf("Starting date (DD MM YYYY)%d: \n", i + 1);
        scanf("%d %d %d", &Emp[i].join_date.dd, &Emp[i].join_date.mm, &Emp[i].join_date.yyyy);
        getchar();
    }

    printf("Employee Details: \n");
    for(int i = 0; i < n; i++)
    {
        printf("Employee %d\n", i +1);
        printf("Number: %d\n", Emp[i].no);
        printf("Name: %s\n", Emp[i].name);
        printf("Join Date: %d %d %d\n", Emp[i].join_date.dd,Emp[i].join_date.mm,Emp[i].join_date.yyyy);
    }

    return 0;
}
