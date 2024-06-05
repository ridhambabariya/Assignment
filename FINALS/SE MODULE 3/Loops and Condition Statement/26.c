/*(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int n,sum = 0,k;
    p("Enter the positive number = ");
    s("%d",&n);
    for(k=1;k<=n;k++)
    {
        sum = sum+(k*(k+1))/2;
    }
    p("Sum of the series up to %d terms is: %d\n", n, sum);
    return 0;
}