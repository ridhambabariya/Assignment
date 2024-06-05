/*C Program to Reverse a Number Using FOR Loop*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,rev=0,digit;
    p("Enter the number = ");
    s("%d",&num);
    for (;num!=0;num/=10)
    {
        digit = num%10;
        rev = rev*10+digit;
    }
    p("\nrev number = %d",rev);
    return 0;
}