/*WAP to accept 5 numbers from user and display all numbers*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    for (int i=1;i<=5;i++)
    {
        p("Enter the number = ");
        s("%d",&num);
        p("\n%d",num);
    }
    return 0;
}