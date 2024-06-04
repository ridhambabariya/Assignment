/*
WAP to accept the height of a person in centimeters and categorize the 
person according to their height.
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int h;
    p("Enter the height in centimeter = ");
    s("%d",&h);
    if(h<=150)
    {
        p("Dwarf");
    }
    else if(h<=165)
    {
        p("Average");
    }
    else if(h<=195)
    {
        p("Taller");
    }
    else
    {
        p("Abnormal height");
    }
    return 0;
}