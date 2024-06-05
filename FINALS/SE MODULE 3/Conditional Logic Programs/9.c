/*
C Program to Check Uppercase or Lowercase or Digit or Special 
Character
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char ch;
    p("Enter the Character here = ");
    s(" %c",&ch);
    if(ch>='A' && ch<='Z')
    {
        p("\nThis is an uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
        p("\nThis is a lower case");
    }
    else
    {
        p("\nThis is a special character");
    }
    return 0;
}