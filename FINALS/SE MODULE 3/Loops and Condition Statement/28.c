/*1 2 3 6 9 18 27 54...*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int n,term,i;
    p("Enter the range = ");
    s("%d",&n);
    term = 1;
    for(i=0;i<n;i++)
    {
        p("%d ",term);
        if(i%2 == 0)
        {
            term = term*2;
        }
        else
        {
            term = term*3;
        }
    }
    return 0;
}