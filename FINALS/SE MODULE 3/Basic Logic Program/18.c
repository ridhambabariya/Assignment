/*
Calculate person’s Annual salary
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    long int sal;
    p("Enter Your Monthly Salary = ");
    s("%ld",&sal);
    p("\nYour Annual Salary will be %ld",sal*12);
    return 0;
}