/*calculate the Factorial of a Given Number using while loop*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,i;
    long int fact = 1;
    p("Enter the number = ");
    s("%d",&num);
    i = 1;
    while(i<=num)
    {
        fact = fact*i;
        i++;
    }
    p("\nFactorial of %d is = %ld",num,fact);
    return 0;
}