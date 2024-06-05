/*Accept 5 numbers from user and find those numbers factorials*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int numbers[5],i,j;
    long int factorial[5];
    long int fact;
    p("Enter 5 numbers = ");
    for(i=0;i<5;i++)
    {
        p("\nEnter number %d = ",i+1);
        s("%d",&numbers[i]);
    }
    for(i=0;i<5;i++)
    {
        fact = 1;
        for(j=numbers[i];j>0;j--)
        {
            fact = fact*j;
        }
        factorial[i] = fact;
    }
    p("\nFactorials of the entered numbers = ");
    for(i=0;i<5;i++)
    {
        p("\nFactorial of %d is = %ld",numbers[i],factorial[i]);
    }
    return 0;
}