/*Write a program to find out the max from given num (E.g., No: -1562 Max num is 6)*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,max=0,digit;
    p("Enter a number = ");
    s("%d",&num);
    while(num != 0)
    {
        digit = num%10;
        if(digit>max)
        {
            max = digit;
        }
        num = num/10;
    }
    p("\nMax digit is %d",max);
    return 0;
}