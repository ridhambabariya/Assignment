/*WAP to show Vowel or Consonant using switch case*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char ch;
    p("Enter an alphabet here = ");
    s(" %c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            p("\n%c is a vowel",ch);
            break;
        default:
            p("\n%c is a consonant",ch);
    }
    return 0;
}