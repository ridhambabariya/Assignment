/*
16.Convert country’s name in abbreviated form
*/
#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf
int main()
{
    char a[15];
    p("Enter the Name of the country = ");
    s("%s",&a);
    p("\n%s%s%s",toupper(a[0],a[1],a[2]));
    return 0;
}