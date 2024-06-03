/*
Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    double sal,ip;
    p("Enter the annual salary = ");
    s("%ld",&sal);
    ip=(10*sal)/100;
    p("Remaining Salary will be %ld",sal-(ip*2));
    return 0;
}