/*Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,first,last,sum;
    p("Enter the number = ");
    s("%d",&num);
    last = num%10;
    first = num;
    while(first>=10)
    {
        first = first/10;
    }
    sum = first+last;
    p("\nThe sum of the first and last digits is = %d",sum);
    return 0;
}