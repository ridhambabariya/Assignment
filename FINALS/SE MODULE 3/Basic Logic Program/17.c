/*
Calculate person’s insurance premium based on salary
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    double sal,rate;
    p("Enter Your Salary = ");
    s("%ld",&sal);
    p("Enter the premier rate = ");
    s("%ld",&rate);
    p("Your Insurance premium will be of %ld",sal*rate);
    return 0;
}