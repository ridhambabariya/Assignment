/*Accept 5 numbers from user and perform sum of array*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int numbers[5];
    int sum = 0,i;
    p("\nEnter 5 numbers = ");
    for(i = 0;i < 5;i++)
    {
        p("\nNumber %d",i+1);
        s("%d",&numbers[i]);
    }
    for(i = 0;i < 5;i++)
    {
        sum = sum + numbers[i];
    }
    p("\nSum of the numbers = %d",sum);
    return 0;
}