/*
Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable
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
    p("\nswapped 2 numbers Using a 3rd variable");
    num3=num2;
    num2=num1;
    num1=num3;
    p("\nswapped 2 numbers without Using a 3rd variable");
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    return 0;
}