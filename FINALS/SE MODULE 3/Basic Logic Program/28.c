/*
Convert years into days and months
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    float year,days,months;
    p("Enter the number of years = ");
    s("%f",&year);
    days = year * 365;
    months = year * 12;
    p("Days into years = %.0f\nMonths into years = %.2f",days,months);
    return 0;
}