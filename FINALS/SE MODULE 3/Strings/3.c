/*Write a program in C to print individual characters of a string in reverse order*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str[100];
    int length = 0,i;
    p("Enter the string = ");
    s("%s",str);
    while(str[length]!='\0')
    {
        length++;
    }
    p("\nThe characters in reverse order are = ");
    for(i=length-1;i>=0;i--)
    {
        p("\n%c",str[i]);
    }
    return 0;
}