/*Calculate 5 numbers from user and calculate number of even and odd using of while loop*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int i=0,num,evencount=0,oddcount=0;
    while(i<5)
    {
        p("Enter number %d = ",i+1);
        s("%d",&num);
        if(num%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
        i++;
    }
    p("Number of even numbers = %d",evencount);
    p("Number of odd numbers = %d",oddcount);
    return 0;
}