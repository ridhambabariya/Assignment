/*
Find character value from ascii
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    char a;
    p("Enter the Character = ");
    s(" %c",&a);
    p("The ascii value of %c is %d",a,a);
    return 0;
}