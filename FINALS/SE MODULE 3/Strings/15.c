/*Write a program in C to find the largest and smallest words in a string*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define p printf
#define s scanf
int main()
{
    char str[100],word[100],smallest[100],largest[100];
    int i,j,k,length,small,large;
    p("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    small = large = strlen(str);
    smallest[0] = largest[0] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            j = i;
            while(isalpha(str[j]))
            {
                j++;
            }
            length = j-i;
            strncpy(word,&str[i],length);
            word[length] = '\0';
            if(length < small)
            {
                small = length;
                strcpy(smallest,word);
            }
            if(length > large)
            {
                large = length;
                strcpy(largest,word);
            }
            i = j;
        }
    }
    p("\nSmallest word = %s",smallest);
    p("\nLargest word = %s",largest);
    return 0;
}