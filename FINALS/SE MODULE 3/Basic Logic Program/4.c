/*
Find Area of Square formula : a = a2
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int a;
    p("Enter the side of the square = ");
    s("%d",&a);
    p("\nThe Area of the given square is = %d",a*a);
    return 0;
}