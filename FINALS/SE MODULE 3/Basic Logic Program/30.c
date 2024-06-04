/*
WAP to convert years into days and days into years
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    float years,days;
    p("Entr the number of years = ");
    s("%f",&years);
    days = years * 365;
    p("\n%.2f years = %.0f days");
    p("\nEntr the number of days = ");
    s("%f",&days);
    years = days / 365;
    p("\n%.0f days = %.2f years");
    return 0;
}