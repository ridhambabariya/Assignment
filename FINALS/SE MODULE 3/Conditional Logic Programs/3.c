/*
WAP to check if the given year is a leap year or not.
*/
#include <stdio.h>
#define pi 3.14
#define p printf
#define s scanf
int main()
{
    int year;
    p("Enter the year you want to check = ");
    s("%d",&year);
    if(year%4==0)
    {
        p("\nThis is a leap year");
    }
    else
    {
        p("\nThis is not a leap year");
    }
    return 0;
}