/*
Find area of Rectangle Formula : A=wl
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int w,l;
    p("Enter the width = ");
    s("%d",&w);
    p("Enter the length = ");
    s("%d",&l);
    p("The Area of Rectangle is = %d",w*l);
    return 0;
}