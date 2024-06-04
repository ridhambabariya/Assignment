/*Write a program make a summation of given num (E.g., 1523 Ans: -11)*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,sum=0,digit;
    p("Enter a num = ");
    s("%d",&num);
    while(num != 0)
    {
        digit = num%10;
        sum = sum+digit;
        num = num/10;
    }
    p("\nSum of digits = %d",sum);
    return 0;
}