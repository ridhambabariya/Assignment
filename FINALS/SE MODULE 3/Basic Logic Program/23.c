/*
WAP to calculate swap 2 numbers with using of multiplication and division.
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int num1,num2,num3;
    p("Enter the value of num1 = ");
    s("%d",&num1);
    p("\nEnter the value of num2 = ");
    s("%d",&num2);
    p("\nswapped 2 numbers Using Multiplication and Division");
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    return 0;
}