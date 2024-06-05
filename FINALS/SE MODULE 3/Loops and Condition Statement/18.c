/*Write a C Program to Print the Multiplication Table of N*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int n,i;
    p("Enter the number = ");
    s("%d",&n);
    p("\nMultiplication Table of %d = ",n);
    for(i=1;i<=10;i++)
    {
        p("\n%d x %d = %d",n,i,n*i);
    }
    return 0;
}