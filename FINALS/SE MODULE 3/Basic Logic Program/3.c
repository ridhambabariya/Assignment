/*
WAP to Find Area And Circumference of Circle
*/
#include<stdio.h>
#define pi 3.14
#define p printf
#define s scanf
int main()
{
    float r,a;
    p("\nEnter the radius of the circle = ");
    s("%f",&r);
    p("\nArea of the circle = %.2f",pi*r*r);
    p("Circumference of Circle = %.2f",2*pi*r);
    return 0;
}