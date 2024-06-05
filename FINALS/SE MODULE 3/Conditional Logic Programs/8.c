/*
WAP to accept the height of a person in centimeters and categorize the 
person according to their height.
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int h;
    p("\nEnter the height in centimeter = ");
    s("%d",&h);
    if(h<=150)
    {
        p("\nDwarf");
    }
    else if(h<=165)
    {
        p("\nAverage");
    }
    else if(h<=195)
    {
        p("\nTaller");
    }
    else
    {
        p("\nAbnormal height");
    }
    return 0;
}