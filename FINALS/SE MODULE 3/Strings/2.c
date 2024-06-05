/*Write a program in C to separate individual characters from a string*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str[100];
    int i = 0;
    p("Enter the string = ");
    s("%s",str);
    while(str[i]!='\0')
    {
        p("\n%c",str[i]);
        i++;
    }
    return 0;
}