/*Write a program in C to read any Month Number in integer and display the 
number of days for this month*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int month;
    p("Enter the month number here = ");
    s("%d",&month);
    if(month==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12)
    {
        p("\n31 days in a month");
    }
    else if(month==2)
    {
        p("\n28 days in a month");
    }
    else
    {
        p("\n30 days in a month");
    }
    return 0;
}