/*
Write a C program to accept two integers and check whether they are equal or not
*/
#include <stdio.h>
#define pi 3.14
#define p printf
#define s scanf
int main()
{
    int num1,num2;
    p("Enter the value of num1 = ");
    s("%d",num1);
    p("\nEnter the value of num2 = ");
    s("%d",num2);
    if(num1==num2)
    {
        p("\nBoth the numbers are equal");
    }
    else
    {
        p("\nBoth the numbers are not equal");
    }
    return 0;
}