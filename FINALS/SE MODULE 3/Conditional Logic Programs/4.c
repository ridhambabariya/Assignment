/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
#define pi 3.14
#define p printf
#define s scanf
int main()
{
    int num1,num2;
    char op;
    p("Enter the value of no1 = ");
    s("%d",&num1);
    p("\nEnter the value of no2 = ");
    s("%d",&num2);
    p("\nEnter the operator = ");
    s(" %c",&op);
    if(op=='+')
    {
        p("\nThe addition of %d and %d is = %d",num1,num2,num1+num2);
    }
    else if(op=='-')
    {
        p("\nThe subtraction of %d and %d is = %d",num1,num2,num1-num2);
    }
    else if(op=='*')
    {
        p("\nThe multiplication of %d and %d is = %d",num1,num2,num1*num2);
    }
    else if(op=='/')
    {
        p("\nThe Division of %d and %d is = %d",num1,num2,num1/num2);
    }
    else
    {
        p("\nThe Modulo of %d and %d is = %d",num1,num2,num1%num2);
    }
    return 0;
}