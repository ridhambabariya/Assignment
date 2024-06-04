/*WAP to print table up to given nums*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,limit;
    p("Enter the number for which you want to print the table = ");
    s("%d",&num);
    p("\nEnter the limit up to which you want to print the table = ");
    s("%d",&limit);
    p("\nMultiplication table of %d up to %d = ",num,limit);
    for (int i=1;i<=limit;i++)
    {
        p("\n%d x %d = %d",num,i,num*i);
    }
    return 0;
}