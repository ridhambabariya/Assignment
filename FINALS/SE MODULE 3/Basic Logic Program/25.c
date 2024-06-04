/*
Accept 5 expense from user and find average of expense
*/
#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    double exp[5],total;
    int i,j=0;
    for(i=1;i<=5;i++)
    {
        p("Enter the expense no. %d",i);
        s("%ld",exp[j]);
        j++;
    }
    for(i=0;i<5;i++)
    {
        total = total + exp[i];
    }   
    p("Average expense will be %ld",total/5);
    return 0;
}