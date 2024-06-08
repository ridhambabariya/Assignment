/*Write a program of to swap the two values using template*/
#include <iostream>
using namespace std;
template<typename T>
void swapValues(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5,y = 10;
    cout<<"Value of x Before swapping = "<<x<<endl;
    cout<<"Value of y Before swapping = "<<y<<endl;
    swapValues(x,y);
    cout<<"Value of x after swapping = "<<x<<endl;
    cout<<"Value of y after swapping = "<<y<<endl;
    char a = 'A',b = 'B';
    cout<<"Value of a Before swapping = "<<a<<endl;
    cout<<"Value of b Before swapping = "<<b<<endl;\
    swapValues(a,b);
    cout<<"Value of a after swapping = "<<a<<endl;
    cout<<"Value of b after swapping = "<<b<<endl;
    double m = 3.14,n = 6.28;
    cout<<"Value of m Before swapping = "<<m<<endl;
    cout<<"Value of n Before swapping = "<<n<<endl;\
    swapValues(m,n);
    cout<<"Value of m after swapping = "<<m<<endl;
    cout<<"Value of n after swapping = "<<n<<endl;
    return 0;
}