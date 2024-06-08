/*
Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading
*/
#include <iostream>
using namespace std;
int mathOperation(int a,int b)
{
    return a+b;
}
double mathOperation(double a,double b)
{
    return a+b;
}
int mathOperation(int a,int b,int c)
{
    return a-b-c;
}
int mathOperation(int a,int b,int c,int d)
{
    return a*b*c*d;
}
double mathOperation(double a,int b)
{
    if (b != 0)
        return a/b;
    else
    {
        cout<<"Division by zero error!"<<endl;
        return 0;
    }
}
int main()
{
    int num1 = 10,num2 = 5,num3 = 2;
    double num4 = 10.5,num5 = 2.5;
    cout<<"Addition = "<<mathOperation(num1,num2)<<endl;
    cout<<"Addition of double = "<<mathOperation(num4,num5)<<endl;
    cout<<"Subtraction = "<<mathOperation(num1,num2,num3)<<endl;
    cout<<"Multiplication = "<<mathOperation(num1,num2,num3,num2)<<endl;
    cout<<"Division = "<<mathOperation(num4,num2)<<endl;
    cout<<"Division by zero = "<<mathOperation(num4,0)<<endl;
    return 0;
}