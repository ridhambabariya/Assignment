/*
Accept 2 numbers and find out its sum check it size
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int num1,num2;
    p("Enter the value of num1 = ");
    s("%d",&num1);
    p("\nSize of num1 = ",sizeof(num1));
    p("\nEnter the value of num2 = ");
    s("%d",&num2);
    p("\nSize of num2 = ",sizeof(num2));
    p("\nSum of both numbers is = %d",num1 + num2);
    return 0;
}