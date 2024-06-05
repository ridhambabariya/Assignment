/*
Convert minutes into seconds and hours
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    float minute,sec,hour;
    p("Enter the minutes = ");
    s("%f",&minute);
    sec = minute * 60;
    hour = minute / 60;
    p("\n%.1f Minutes = %.0f Seconds",minute,sec);
    p("\n%.1f Minutes = %.1f Hours",minute,hour);
    return 0;
}