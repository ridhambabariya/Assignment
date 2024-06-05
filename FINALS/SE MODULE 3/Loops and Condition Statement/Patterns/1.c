/*
1
1 0 
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int rows,i,j;
    p("Enter the number of rows = ");
    s("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                p("0 ");
            }
            else
            {
                p("1 ");
            }
        }
        p("\n");
    }
    return 0;
}