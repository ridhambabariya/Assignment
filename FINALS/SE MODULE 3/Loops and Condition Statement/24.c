/*1 + 2 + 3 + 4 + 5 + ... + n*/
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
        sum = sum+i;
    }
    p("\nThis is the sum of all the numbers = %d",sum);
    return 0;
}