/*Write a program of structure employee that provides the following information print and display empno, empname, address and age*/
#include <stdio.h>
#define p printf
#define s scan
struct Employee
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};
int main()
{
    int n,i;
    p("\nEnter the number of employees = ");
    s("%d",&n);
    struct Employee e[n];
    for(i = 0;i < n;i++)
    {
        p("\nEnter details for Employee %d = ",i+1);
        p("\nEmployee Number = ");
        s("%d",&e[i].empno);
        p("\nEmployee Name = ");
        s("%s",e[i].empname);
        p("Address = ");
        s("%s",e[i].address);
        p("Age = ");
        s("%d",&e[i].age);
    }
    p("\nEmployee Information : ");
    for(i = 0;i < n;i++)
    {
        p("\nEmployee = %d",i+1);
        p("\nEmployee Number = %d",e[i].empno);
        p("\nEmployee Name = %s",e[i].empname);
        p("\nAddress = %s",e[i].address);
        p("\nAge = %d",e[i].age);
    }
    return 0;
}