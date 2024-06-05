/*
WAP to check whether a number is negative, positive or zero.
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    p("\nEnter the number = ");
    s("%d",&num);
    if(num>0)
    {
        p("\nThe number is positive");
    }
    else if(num==0)
    {
        p("\nThe number is zero");
    }
    else
    {
        p("\nThe number is negative");
    }
    return 0;
}