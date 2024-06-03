/*
Accept number of students from user. I need to give 5 apples to each 
student. How many apples are required?
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    int std;
    p("Enter the number of the students = ");
    s("%d",&std);
    p("Total Required Apples are = %d",std*5);
    return 0;
}