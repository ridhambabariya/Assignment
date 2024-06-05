/*
Find Area of Cube formula : a = 6a2
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int a;
    p("Enter the side of the square = ");
    s("%d",&a);
    p("\nThe Area of Cube is = %d",6*a*a);
    return 0;
}