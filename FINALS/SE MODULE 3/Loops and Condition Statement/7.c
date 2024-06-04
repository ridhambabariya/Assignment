/*WAP to print num in reverse order e.g.: num = 64728 ---> reverse = 82746*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,reverse=0,rem;
    p("Enter a number = ");
    s("%d",&num);
    while(num!=0)
    {
        rem = num%10;
        reverse = (reverse* 10)+rem;
        num = num/10;
    }
    p("\nReversed num = %d",reverse);
    return 0;
}