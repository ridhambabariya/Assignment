/*
find the area of a rectangular prism formula : A=2(wl+hl+hw)
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int w,l,h;
    p("Enter the side a = ");
    s("%d",&w);
    p("\nEnter the side b = ");
    s("%d",&l);
    p("\nEnter the side c = ");
    s("%d",&h);
    p("\nThe area of a rectangular prism is = %d",2*((w*l)+(h*l)+(h*w)));
    return 0;
}