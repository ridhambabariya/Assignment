/*
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int i,j,rows;
    char ch='A';
    p("Enter the number of rows = ");
    s("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        ch = 'A';
        for(j=1;j<=i;j++)
        {
            p("%c ",ch);
            ch++;
        }
        p("\n");
    }
    return 0;
}