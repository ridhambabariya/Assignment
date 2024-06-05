/*
Convert days into months
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int day;
    float month;
    p("Enter the number of days = ");
    s("%d",&day);
    month=(float) day/30;
    p("Days into Months = %.2f",month);
    return 0;
}