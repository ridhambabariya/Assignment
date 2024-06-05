/*WAP to find reverse of string using recursion*/
#include <stdio.h>
#define p printf
#define s scanf
void reverse(char str[]);
int main()
{
    char str[100];
    p("Enter a string = ");
    s("%s",str);
    p("Reverse of the string = ");
    reverse(str);
    return 0;
}
void reverse(char str[])
{
    if(str[0]=='\0')
    {
        return;
    }
    reverse(str + 1);
    p("%c",str[0]);
}