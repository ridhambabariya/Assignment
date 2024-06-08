/*WAP to accept 5 students name and store it in array*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char names[5][50];
    int i;
    for(i = 0;i < 5;i++)
    {
        p("\nEnter the name %d = ",i+1);
        fgets(names[i],sizeof(names[i]),stdin);
        size_t length = strlen(names[i]);
        if(length > 0 && names[i][length-1] == '\n')
        {
            names[i][length-1] = '\0';
        }
    }
    p("\nThe entered names are = ");
    for(i = 0;i < 5;i++)
    {
        p("\nStudent %d = %s",i+1,names[i]);
    }
    return 0;
}