/*Write a program of structure for five employee that provides the following information print and display empno, empname, address and age*/
#include <stdio.h>
#define p printf
#define s scanf
struct Employee
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};
int main()
{
    struct Employee employees[5];
    int i;
    for (int i = 0; i < 5; i++)
    {
        p("\nEnter details for employee %d = ",i+1);    
        p("\nEmployee Number = ");
        s("%d",&employees[i].empno); 
        getchar();
        p("\nEmployee Name = ");
        fgets(employees[i].empname,sizeof(employees[i].empname),stdin);
        employees[i].empname[strcspn(employees[i].empname,"\n")] = '\0';
        p("\nAddress = ");
        fgets(employees[i].address,sizeof(employees[i].address),stdin);
        employees[i].address[strcspn(employees[i].address,"\n")] = '\0';
        p("\nAge = ");
        s("%d", &employees[i].age);
        getchar();
    }
    p("\nEmployee Details = ");
    for(i = 0;i < 5;i++)
    {
        p("\nDetails of Employee %d = ",i+1);
        p("\nEmployee Number = %d",employees[i].empno);
        p("\nEmployee Name = %s",employees[i].empname);
        p("\nAddress = %s",employees[i].address);
        p("Age = %d",employees[i].age);
    }
    return 0;
}