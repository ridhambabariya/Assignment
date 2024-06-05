/*
A
B C
D E F
G H I J
K L M N O
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
        for(j=1;j<=i;j++)
        {
            p("%c ",ch);
            ch++;
        }
        p("\n");
    }
    return 0;
}