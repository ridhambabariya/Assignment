/*WAP to accept 5 numbers from user and display in reverse order using for loop and array*/
#include <stdio.h>
#define p printf
#define s scanf
int isPalindrome(int number)
{
    int originalNumber,reversedNumber = 0,remainder;
    originalNumber = number;
    for(;number != 0;number = number/10)
    {
        remainder = number%10;
        reversedNumber = (reversedNumber*10)+remainder;
    }
    if
    (originalNumber == reversedNumber)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    p("\nEnter the number = ");
    s("%d",&number);
    if(isPalindrome(number))
    {
        p("\n%d is a palindrome",number);
    }
    else
    {
        p("\n%d is not a palindrome",number);
    }
    return 0;
}