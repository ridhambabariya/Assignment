/*
Find ascii value of given number
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int a;
    p("Enter the Number = ");
    s("%d",&a);
    p("\nThe ascii value of %d is %c",a,a);
    return 0;
}