/*WAP to find number is even or odd using ternary operator*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    p("Enter the number = \n");
    scanf("%d",&num);
    (num%2==0) ? p("This is an even number\n",num) : p("This is an odd number",num);
    return 0;
}