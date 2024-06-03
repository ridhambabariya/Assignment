/*
15.Convert school’s name in abbreviated form
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    char a[15];
    p("Enter the Name of the school = ");
    s("%s",&a);
    p("%s%s College",a[0],a[1]);
    return 0;
}