/*WAP to find factorial using recursion*/
#include <stdio.h>
#define p printf
#define s scanf
long int fact(int n);
long int fact(int n)
{
    if(n>=1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    p("Enter the positive number = ");
    s("%d",&n);
    p("\nFactorial of %d = %ld",n,fact(n));
    return 0;
}