/*
Accept 5 employees name and salary and count average and total salary
*/
#include<stdio.h>
#define p printf
#define s scanf
struct Emp
{
    char name[15];
    double sal;
};

int main()
{
    struct Emp e[5];
    int i,j=0;
    double total;
    for(i=1;i<=5;i++)
    {
        p("Enter the name of employee no. %d",i);
        s("%s",e[j].name);
        j++;
    }
    for(i=0;i<5;i++)
    {
        total = total + e[i].sal;
    }   
    p("Total salary will be %ld",total);
    p("Average salary will be %ld",total/5);
    return 0;
}