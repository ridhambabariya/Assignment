/*WAP to print factorial of given num*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    long int factorial = 1;
    p("Enter a number = ");
    s("%d",&num);
    if(num<0)
    {
        p("\nFactorial of a negative num doesn't exist.");
    }
    else
    {
        for (int i=1;i<=num;i++)
        {
            factorial = factorial*i;
        }
        p("\nFactorial of %d = %ld",num,factorial);
    }
    return 0;
}