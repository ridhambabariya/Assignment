/*WAP to find the largest of three numbers.*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num1,num2,num3;
    p("\nEnter the value of num1 = ");
    s("%d",&num1);
    p("\nEnter the value of num2 = ");
    s("%d",&num2);
    p("\nEnter the value of num3 = ");
    s("%d",&num3);
    if(num1>=num2 && num1>=num3)
    {
        p("\n%d is the largest number",num1);
    }
    else if(num2>=num1 && num2>=num3)
    {
        p("\n%d is the largest number",num2);
    }
    else
    {
        p("\n%d is the largest number",num3);
    }
    return 0;
}