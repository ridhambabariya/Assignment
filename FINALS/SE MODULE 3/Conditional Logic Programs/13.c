/*WAP to find minimum number among 3 numbers using ternary operator */
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int num1,num2,num3,min;
    printf("\nEnter the value of num1 = ");
    scanf("%d",&num1);
    printf("\nEnter the value of num2 = ");
    scanf("%d",&num2);
    printf("\nEnter the value of num3 = ");
    scanf("%d",&num3);
    min = (num1<num2) ? ((num1<num3)?num1:num3) : ((num2<num3)?num2:num3);
    p("\nThe minimum number is = %d",min);
    return 0;
}