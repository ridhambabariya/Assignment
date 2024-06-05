/*Write a program in C to count the total number of alphabets, digits and special characters in a string*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str[100];
    int alphabets = 0,digits = 0,specialCharacters = 0,i;
    printf("Enter the string = ");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] != '\n')
        {
            specialCharacters++;
        }
        i++;
    }
    printf("\nTotal number of alphabets = %d",alphabets);
    printf("\nTotal number of digits = %d",digits);
    printf("\nTotal number of special characters = %d",specialCharacters);
    return 0;
}