/*
C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    p("Enter the value of num = ");
    s("%d",&num);
    p("\nPower of N^1 = %d",pow(num,1));
    p("\nPower of N^2 = %d",pow(num,2));
    p("\nPower of N^3 = %d",pow(num,3));
    return 0;
}