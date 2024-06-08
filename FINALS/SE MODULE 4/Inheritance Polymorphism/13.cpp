/*Write a program to find the max number from given two numbers using friend function*/
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int numA;
public:
    A(int num) : numA(num)
    {
        numA = num;
    }
    friend int findMax(A&,B&);
};
class B
{
private:
    int numB;
public:
    B(int num) : numB(num)
    {
        numB = num;
    }
    friend int findMax(A&, B&);
};
int findMax(A& objA,B& objB)
{
    return(objA.numA > objB.numB)?objA.numA : objB.numB;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers = ";
    cin>>num1>>num2;
    A objA(num1);
    B objB(num2);
    cout<<"Maximum number is = "<<findMax(objA,objB)<<endl;
    return 0;
}