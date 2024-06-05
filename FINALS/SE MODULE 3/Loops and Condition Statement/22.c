/*Accept 3 numbers from user using while loop and check each numbers palindrome*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num,org,rev,rem;
    int count = 0;
    while(count<3)
    {
        p("\nEnter the number %d = ",count+1);
        s("%d",&num);
        org = num;
        rev = 0;
        while (num != 0)
        {
            rem = num%10;
            rev = rev*10+rem;
            num = num/10;
        }
        if(org == rev)
        {
            p("\n%d is a palindrome",org);
        }
        else
        {
            p("\n%d is not a palindrome",org);
        }
        count++;
    }
    return 0;
}