/*
Find circumference of square formula : C = 4 * a
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int a;
    p("Enter the side = ");
    s("%d",&a);
    p("\nThe circumference of Square is = %d",4*a);
    return 0;
}