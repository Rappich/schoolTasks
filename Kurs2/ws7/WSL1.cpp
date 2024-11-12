#include <iostream>
#include <string>

class BankAccount
{
    private:
    int accountNumber;
    int balance;

    public:
    BankAccount(int accountNumber, int balance)

    {
        this-> accountNumber = accountNumber;
        this-> balance = balance;
    }

    
    void deposit(int amount)
    {
    balance += amount;
    }

    void withdraw(int amount)
    {
    balance -= amount;
    }

    int getBalance()
    {
        return balance;
    }
};



int main ()

{
    BankAccount account(910615, 1000);
    std::cout << "Balance: " << account.getBalance() << std::endl;
    account.deposit(500);
    std::cout << "Balance: " << account.getBalance() << std::endl;
    account.withdraw(200);
    
    std::cout << "Balance: " << account.getBalance() << std::endl;
    
    return 0;
}