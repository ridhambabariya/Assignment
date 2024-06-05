/*Write a program in C to remove characters from a string except alphabets*/
#include <stdio.h>
#include <ctype.h>
#define p printf
#define s scanf
int main()
{
    char str[100],result[100];
    int i,j = 0;
    p("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    for(i = 0;str[i] != '\0';i++)
    {
        if(isalpha(str[i]))
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    p("\nString after removing non-alphabetic characters = %s",result);
    return 0;
}