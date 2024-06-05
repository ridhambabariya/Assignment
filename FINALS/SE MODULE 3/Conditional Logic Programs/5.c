/*
Check Number Is Positive or Negativ
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    p("Enter the number = ");
    s("%d",&num);
    if(num>0)
    {
        p("\nThe number is positive");
    }
    else if(num==0)
    {
        p("\nThe number is neutral");
    }
    else
    {
        p("\nThe number is negative");
    }
    return 0;
}