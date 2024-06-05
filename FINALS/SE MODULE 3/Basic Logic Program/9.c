/*
Find circumference of Triangle formula : triangle = a + b + c
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int a,b,c;
    p("Enter the side a = ");
    s("%d",&a);
    p("\nEnter the side b = ");
    s("%d",&b);
    p("\nEnter the side c = ");
    s("%d",&c);
    p("\nThe circumference of Triangle is = %d",a+b+c);
    return 0;
}