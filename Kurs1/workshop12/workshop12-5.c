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

int amountOfInputs;

int main()
{

    printf("How many employees do you want to input?\n");
    scanf("%d", &amountOfInputs);


    struct emp employee[amountOfInputs];

    for (int i = 0; i < amountOfInputs; i++)
    {
        printf("Enter employee number: ");
        scanf("%d", &employee[i].no); 
        
        printf("Enter employee name: ");
        scanf("%s", employee[i].name);
        
        printf("Enter join date (DD MM YYYY): ");
        scanf("%d %d %d", &employee[i].join_date.dd, &employee[i].join_date.mm, &employee[i].join_date.yyyy);
    }
    
   
    printf("\nEmployee Details:\n");
    for (int i = 0; i < amountOfInputs; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("Number: %d\n", employee[i].no);
        printf("Name: %s\n", employee[i].name);
        printf("Join Date: %02d/%02d/%d\n", employee[i].join_date.dd, employee[i].join_date.mm, employee[i].join_date.yyyy);
        printf("\n");
    }

    return 0;
}


