/*Write a program in C to extract a substring from a given string*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str[100];
    int max = 0,length = 0,i = 0;
    p("Enter the string = ");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0')
    {
        length++;
        i++;
    }
    max = length - 1;
    p("\nThe maximum number of characters in the string is = %d",max);
    return 0;
}