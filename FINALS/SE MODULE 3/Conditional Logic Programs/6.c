/*Find the Character Is Vowel or Not*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char ch;
    p("Enter the character here = ");
    s("%d",&ch);
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
    {
        p("\nThis is a vowel");
    }
    else
    {
        p("\nThis is not a vowel this is a consonant");
    }
    return 0;
}