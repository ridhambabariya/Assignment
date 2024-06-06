/*
Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    string depositor;
    long int acnum;
    string actype;
    long int balance;
public:
    void assignValues(string name,long int accNum,string accType,long int bal)
    {
        depositor = name;
        acnum = accNum;
        actype = accType;
        balance = bal;
    }
    void deposit(long int amount)
    {
        if(amount > 0)
        {
            balance = balance+amount;
            cout<<"Amount deposited successfully"<<endl;
            cout<<"New Balance in account is = "<<balance<<endl;
        }
        else
        {
            cout<<"Invalid deposit amount"<<endl;
        }
    }
    void withdraw(long int amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance = balance-amount;
            cout<<"Amount withdrawn successfully"<<endl;
            cout<<"New Balance in account is = "<<balance<<endl;
        }
        else if(amount > balance)
        {
            cout<<"Insufficient balance"<<endl;
        }
        else
        {
            cout<<"Invalid withdrawal amount"<<endl;
        }
    }
    void display()
    {
        cout<<"Depositor Name = "<<depositor<<endl;
        cout<<"Account Balance = "<<balance<<endl;
    }
};
int main()
{
    BankAccount ac1;
    ac1.assignValues("John Doe",123456,"Savings",1000);
    ac1.display();
    ac1.deposit(500);
    ac1.withdraw(300);
    ac1.display();
    return 0;
}