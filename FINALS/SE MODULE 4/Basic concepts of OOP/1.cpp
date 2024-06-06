/*WAP to create simple calculator using class*/
#include <iostream>
using namespace std;
class Calc
{
    public :
        int num1,num2;
        void add(int n1,int n2)
        {
            num1 = n1;
            num2 = n2;
            cout<<"The Addition is = "<<(n1+n2)<<endl;
        }
        void sub(int n1,int n2)
        {
            num1 = n1;
            num2 = n2;
            cout<<"The Subtraction is = "<<(n1-n2)<<endl;
        }
        void mul(int n1,int n2)
        {
            num1 = n1;
            num2 = n2;
            cout<<"The Multiplication is = "<<(n1*n2)<<endl;
        }
        void div(int n1,int n2)
        {
            num1 = n1;
            num2 = n2;
            cout<<"The Division is = "<<(n1/n2)<<endl;
        }
        void mod(int n1,int n2)
        {
            num1 = n1;
            num2 = n2;
            cout<<"The Modulo is = "<<(n1%n2)<<endl;
        }
};
int main()
{
    Calc c;
    c.add(5,5);
    c.sub(5,5);
    c.mul(5,5);
    c.div(5,5);
    c.mod(5,5);
    return 0;
}