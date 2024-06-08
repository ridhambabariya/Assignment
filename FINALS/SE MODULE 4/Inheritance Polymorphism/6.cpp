/*Write a C++ Program to show access to Private Public and Protected using Inheritance*/
#include <iostream>
using namespace std;
class Base 
{
private:
    int privateVarBase;
protected:
    int protectedVarBase;
public:
    int publicVarBase;
    Base(int pvb,int prb,int pub) : privateVarBase(pvb), protectedVarBase(prb), publicVarBase(pub)
    {
        privateVarBase = pvb;
        protectedVarBase = prb;
        publicVarBase = pub;
    }
    void display()
    {
        cout<<"Private Variable in Base class = "<<privateVarBase<<endl;
        cout<<"Protected Variable in Base class = "<<protectedVarBase<<endl;
        cout<<"Public Variable in Base class = "<<publicVarBase<<endl;
    }
};
class Derived : public Base
{
public:
    Derived(int pvb,int prb,int pub) : Base(pvb, prb, pub) {}
    void displayDerived()
    {
        cout<<"Protected Variable in Derived class = "<<protectedVarBase<<endl;
        cout<<"Public Variable in Derived class = "<<publicVarBase<<endl;
    }
};
int main()
{
    Derived d(10, 20, 30);
    cout<<"Accessing Base class members = "<<endl;
    d.display();
    cout<<"\nAccessing Derived class members = "<<endl;
    d.displayDerived();
    return 0;
}