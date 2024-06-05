/*
Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num1,num2;
    p("Enter the First Number = ");
    s("%d",&num1);
    p("\nEnter the Second Number = ");
    s("%d",&num2);
    p("\nThe addition of %d and %d is = %d",num1,num2,num1+num2);
    p("\nThe subtraction of %d and %d is = %d",num1,num2,num1-num2);
    p("\nThe Multiplication of %d and %d is = %d",num1,num2,num1*num2);
    p("\nThe Division of %d and %d is = %d",num1,num2,num1/num2);
    p("\nThe Modulo of %d and %d is = %d",num1,num2,num1%num2);
    return 0;
}