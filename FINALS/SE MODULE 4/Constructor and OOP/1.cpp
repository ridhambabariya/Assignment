/*Write a program to find the multiplication values and the cubic values using inline function*/
#include <iostream>
using namespace std;
inline int multiply(int a,int b)
{
    return a*b;
}
inline int cubic(int x)
{
    return x*x*x;
}
int main()
{
    int num1,num2,num;
    cout<<"Enter any 2 number = ";
    cin>>num1>>num2;
    cout<<"Enter any number =  ";
    cin>>num;
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is = "<<multiply(num1,num2)<<endl;
    cout<<"Cubic value of "<<num<<" is = "<<cubic(num)<<endl;
    return 0;
}