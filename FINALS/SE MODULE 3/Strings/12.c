/*Write a program in C to find the number of times a given word 'is' appears in the given string*/
#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf
int main()
{
    char str[100],word[2]='is';
    int count = 0,i;
    p("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    for(i = 0;i < strlen(str)-strlen(word)+1;i++)
    {
        if(strncmp(&str[i],word,strlen(word)) == 0)
        {
            count++;
        }
    }
    p("\nThe word 'is' appears %d times in the string",count);
    return 0;
}