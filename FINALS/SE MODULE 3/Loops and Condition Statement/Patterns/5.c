/*
        *
      * * *
    * * * * * 
  * * * * * * *
* * * * * * * * *
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int i,j,rows,spc,k;
    p("Enter the number of rows = ");
    s("%d",&rows);
    spc = rows + 4 - 1;
    for(i=1;i<=rows;i++)
    {
        for(k=spc;k>=1;k--)
        {
            p(" ");
        }
        for(j=1;j<=i;j++)
        {
            p("* ");
        }
        p("\n");
        spc--;
    }
    return 0;
}