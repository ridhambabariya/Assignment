/*Calculate the Sum of Natural Numbers Using the While Loop*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int n,i=1,sum=0;
    p("Enter a positive number = ");
    s("%d",&n);
    while(i<=n)
    {
        sum = sum+i;
        i++;
    }
    p("\nThe sum of the first %d natural numbers is = %d",n,sum);
    return 0;
}