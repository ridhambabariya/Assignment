/*1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int n,i;
    float sum = 0,term;
    p("Enter the range = ");
    s("%d",&n);
    for(i=1;i<=n;i++)
    {
        float term = (float)i/(i+1);
        if(i%2 == 0)
        {
            sum = sum-term;
        }
        else
        {
            sum = sum+term;
        }
    }
    p("\nSum of the series up to %d terms is = %.2f",n,sum);
    return 0;
}