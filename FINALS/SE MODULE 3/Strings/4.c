/*Write a program in C to count the total number of words in a string*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str[100];
    int i,words;
    printf("Enter the string = ");
    gets(str);
    i = 0;
    words = 1;
    while(str[i] != '\0')
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            words++;
        }
        i++;
    }
    printf("Total number of words = %d",words);
    return 0;
}