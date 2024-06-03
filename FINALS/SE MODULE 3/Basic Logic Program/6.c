/*
Find area of Triangle Formula : A = 1/2 × b × h
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    float b,h;
    p("Enter the base = ");
    s("%f",&b);
    p("Enter the height = ");
    s("%f",&h);
    p("The Area of Cube is = %f",(1/2*(b*h)));
    return 0;
}