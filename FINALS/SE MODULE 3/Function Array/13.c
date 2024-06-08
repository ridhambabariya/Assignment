/*WAP to accept 5 numbers from user and check entered number is even or odd using of array*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int numbers[5],i;
    for(i = 0;i < 5;i++)
    {
        p("\nEnter the number %d = ",i+1);
        s("%d",&numbers[i]);
    }
    for(i = 0;i < 5;i++)
    {
        if(numbers[i]%2 == 0)
        {
            p("\nNumber %d (%d) is even",i+1,numbers[i]);
        }
        else
        {
            p("\nNumber %d (%d) is odd",i+1,numbers[i]);
        }
    }
    return 0;
}