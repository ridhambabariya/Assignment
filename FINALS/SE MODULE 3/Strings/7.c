/*Write a program in C to copy one string to another string*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char a[100],b[100];
    int i = 0;
    p("Enter the string = ");
    fgets(a,sizeof(a),stdin);
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    p("\nThe b string is = %s",b);
    return 0;
}