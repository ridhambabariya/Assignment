/*Write a C program to check whether a triangle can be formed with the given values for the angles.*/
#include <stdio.h>
#define p printf
#define s scanf
int main() {
    int a1,a2,a3;
    p("Enter the angle 1 = ");
    s("%d",&a1);
    p("Enter the angle 2 = ");
    s("%d",&a2);
    p("Enter the angle 3 = ");
    s("%d",&a3);
    if((a1+a2+a3)==180)
    {
        p("\nTriangle is valid!");
    }
    else
    {
        p("\nThe triangle is invalid!");
    }
    return 0;
}