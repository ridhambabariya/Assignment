/*
Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account
*/
#include <iostream>
using namespace std;
class BankAccount {
private:
    int acnum;
    long int balance;
public:
    BankAccount(int acnum,long int balance)
    {
        this->acnum = acnum;
        this->balance = balance;
    }
    void deposit(long int amount)
    {
        if(amount > 0)
        {
            balance = balance+amount;
            cout<<"Deposit successfully"<<endl;
            cout<<"Current Balance = "<<balance<<endl;
        }
        else
        {
            cout<<"Invalid amount"<<endl;
        }
    }
    void withdraw(long int amount)
    {
        if
        (amount > 0 && amount <= balance)
        {
            balance = balance-amount;
            cout<<"Withdrawal successfully"<<endl;
            cout<<"Current balance = "<<balance<<endl;
        }
        else
        {
            cout<<"Invalid amount"<<endl;
        }
    }
    long int getBalance()
    {
        return balance;
    }
};
int main()
{
    BankAccount ac1(123456,1000);
    ac1.deposit(500);
    ac1.withdraw(200);
    ac1.withdraw(1500);
    return 0;
}