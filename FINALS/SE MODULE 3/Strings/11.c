/*Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char sentence[100];
    int i;
    p("Enter the sentence = ");
    fgets(sentence, sizeof(sentence), stdin);
    for(i = 0;sentence[i] != '\0';i++)
    {
        if(sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            sentence[i] = sentence[i] - 32;
        }
        else if
        (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            sentence[i] = sentence[i] + 32;
        }
    }
    p("\nModified sentence = %s",sentence);
    return 0;
}