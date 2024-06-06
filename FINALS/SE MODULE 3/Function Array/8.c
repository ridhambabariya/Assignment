/*WAP to reverse a string and check that the string is palindrome or not*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define p printf
#define s scanf
void revstring(char *str)
{
    int length,i;
    char temp;
    length = strlen(str);
    for(i = 0;i < length/2;i++)
    {
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}
bool isPalindrome(char *str)
{
    int length,i;
    length = strlen(str);
    for(i = 0;i < length/2;i++)
    {
        if(str[i] != str[length-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str[100],original[100];
    p("Enter the string = ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    strcpy(original,str);
    revstring(str);
    if(isPalindrome(original))
    {
        p("\nThe string is a palindrome");
    }
    else
    {
        p("The string is not a palindrome");
    }
    p("\nReversed string = %s",str);
    return 0;
}