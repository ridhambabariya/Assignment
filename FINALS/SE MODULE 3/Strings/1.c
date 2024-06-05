/*Write a program in C to find the length of a string without using library functions*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str[100];
    int length = 0;
    p("Enter the string = ");
    s("%s",str);
    while(str[length]!='\0')
    {
        length++;
    }
    p("\nThe length of the string is = %d",length);
    return 0;
}