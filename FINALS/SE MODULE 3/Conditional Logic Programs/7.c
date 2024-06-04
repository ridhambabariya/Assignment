/*Accept marks from user and check pass or fail*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int m1,m2,m3,m4,total;
    p("Enter the marks of m1 = ");
    s("%d",m1);
    p("\nEnter the marks of m2 = ");
    s("%d",m2);
    p("\nEnter the marks of m3 = ");
    s("%d",m3);
    p("\nEnter the marks of m4 = ");
    s("%d",m4);
    total = m1+m2+m3+m4;
    if(total<35)
    {
        p("\nCongratulations! You have passed the exam");
    }
    else
    {
        p("\nTry again! You are failed");
    }
    return 0;
}