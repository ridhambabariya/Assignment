/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int i,j,rows,k=1;
    p("Enter the number of rows = ");
    s("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            p("%d ",k);
            k++;
        }
        p("\n");
    }
    return 0;
}