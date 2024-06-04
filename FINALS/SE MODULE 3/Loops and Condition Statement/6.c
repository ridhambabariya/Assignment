/*WAP to print Fibonacci series up to given numbers*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int n,n1=0,n2=1,n3;
    p("Enter the number of terms = ");
    s("%d",&n);
    p("\nFibonacci Series up to %d terms = ",n);
    p("\n%d, %d, ",n1,n2);
    for(int i=2;i<n;i++)
    {
        n3 = n1+n2;
        p("%d, ",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}