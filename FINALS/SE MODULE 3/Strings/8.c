/*Write a program in C to count the total number of vowels or consonants in a string*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char str[100];
    int i = 0,vowels = 0,consonants = 0;
    p("Enter the string = ");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0')
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
        {
            vowels++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
        i++;
    }
    p("\nTotal number of vowels = %d",vowels);
    p("\nTotal number of consonants = %d",consonants);
    return 0;
}