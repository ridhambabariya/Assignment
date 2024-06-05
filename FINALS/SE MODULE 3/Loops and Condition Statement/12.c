/*Program of Armstrong Number in C Using For Loop & While Loop*/
#include <stdio.h>
#include <math.h>
#define p printf
#define s scanf
int main()
{
    int num,original,original2,org,org2,org3,rem,n=0,n2=0,result=0,result2=0,i;
    p("Enter the number = ");
    s("%d",&num);
    original = num;
    org = num;
    original2 = num;
    org2 = num;
    org3 = num;
    //result using for loop
    for(i=num;i!=0;i=i/10)
    {
        n++;
    }
    for(i=original;i!=0;i=i/10)
    {
        rem = i%10;
        result = result+pow(rem,n);
    }
    if (result == org)
    {
        p("\n%d is an Armstrong number",org);
    }
    else
    {
        p("\n%d is not an Armstrong number",org);
    }
    //result using while loop
    while(org!=0)
    {
        org = org/10;
        n2++;
    }
    while(original2!=0)
    {
        rem = original2%10;
        result2 = result2+pow(rem,n2);
    }
    if (result2 == org3)
    {
        p("\n%d is an Armstrong number",org3);
    }
    else
    {
        p("\n%d is not an Armstrong number",org3);
    }
    return 0;
}