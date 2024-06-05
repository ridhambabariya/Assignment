/*Write a C program to read the value of an integer m and display the value of m is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/
#include <stdio.h>
#define pi 3.14
#define p printf
#define s scanf
int main()
{
    int m;
    p("Enter the value of m = ");
    s("%d",&m);
    if(m>0)
    {
        p("\nThe value of m is = 1");
    }
    else if(m==0)
    {
        p("\nThe value of m is = 0");
    }
    else
    {
        p("\nThe value of m is -1");
    }
    return 0;
}