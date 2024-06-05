/*Write a program in C to compare two strings without using string library functions*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str1[100],str2[100];
    int i = 0,result;
    p("Enter the first string = ");
    s("%s",str1);
    p("\nEnter the second string = ");
    s("%s",str2);
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            result = (str1[i]-str2[i]);
            break;
        }
        i++;
    }
    if(result == 0)
    {
        if(str1[i] == '\0' && str2[i] == '\0')
        {
            result = 0;
        }
        else if(str1[i] == '\0')
        {
            result = -str2[i];
        }
        else
        {
            result = str1[i];
        }
    }
    if(result == 0)
    {
        p("\nThe strings are equal");
    }
    else if(result > 0)
    {
        p("\nThe first string is greater than the second string");
    }
    else
    {
        p("\nThe first string is less than the second string");
    }
    return 0;
}