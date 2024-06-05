/*Calculate sum of 10 numbers using of while loop*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int i=0,sum=0,num;
    while(i<10)
    {
        printf("\nEnter number %d = ",i + 1);
        scanf("%d",&num);
        sum = sum+num;
        i++;
    }
    printf("\nThe sum of the 10 numbers is = %d",sum);
    return 0;
}