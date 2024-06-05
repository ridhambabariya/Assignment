/*
*
* *
* * *  
* * * * 
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
* 
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            p("* ");
        }
        p("\n");
    }
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            p("* ");
        }
        p("\n");
    }
    return 0;
}