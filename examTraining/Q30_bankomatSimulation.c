#include <stdio.h>

void deposit(float *balance);
void withdraw(float *balance);
void showBalance(float balance);

int main() {
    float balance = 1000.0;
    int choice;

    do 
    {
        printf("\nChoose an option:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Show Balance\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                deposit(&balance);
                break;
            case 2:
                withdraw(&balance);
                break;
            case 3:
                showBalance(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Have a great day!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


void deposit(float *balance) 
{
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) 
    {
        *balance += amount;
        printf("You have deposited %.2f. New balance: %.2f\n", amount, *balance);
    } else 
    {
        printf("Invalid amount. Please try again.\n");
    }
}

void withdraw(float *balance) 
{
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= *balance) 
    {
        *balance -= amount;
        printf("You have withdrawn %.2f. New balance: %.2f\n", amount, *balance);
    } else if (amount > *balance) 
    {
        printf("Insufficient balance. You cannot withdraw more than %.2f.\n", *balance);
    } else 
    {
        printf("Invalid amount. Please try again.\n");
    }
}


void showBalance(float balance) 
{
    printf("Current balance: %.2f\n", balance);
}
