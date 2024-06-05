/*(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int n,i,sum=0;
    p("Enter the number of terms = ");
    s("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum+(i*i);
    }
    p("\nThis is the sum of all the numbers = %d",sum);
    return 0;
}