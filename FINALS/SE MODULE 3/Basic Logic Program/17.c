/*
Calculate person’s insurance premium based on salary
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    long int sal,rate;
    p("Enter Your Salary = ");
    s("%ld",&sal);
    p("\nEnter the premier rate = ");
    s("%ld",&rate);
    p("\nYour Insurance premium will be of %ld",sal*rate);
    return 0;
}