/*WAP Find out length of string without using inbuilt function*/
#include <stdio.h>
#define p printf
#define s scanf
int strlength(char *str)
{
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100];
    p("Enter the string = ");
    fgets(str,sizeof(str),stdin);
    int length = strlength(str);
    p("\nLength of the string is: %d",length - 1);
    return 0;
}