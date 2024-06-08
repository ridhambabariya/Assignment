/*Write a C++ Program to find Area of Rectangle using inheritance*/
#include <iostream>
using namespace std;
class Rectangle
{
protected:
    double length;
    double width;
public:
    Rectangle(double l,double w)
    {
        length = l;
        width = w;
    }
    double calculateArea()
    {
        return length*width;
    }
};
class AreaCalculator : public Rectangle
{
public:
    AreaCalculator(double l, double w) : Rectangle(l,w) {}
    void displayArea() {
        cout<<"Area of Rectangle = "<<calculateArea()<<endl;
    }
};
int main()
{
    double length, width;
    cout<<"Enter length of rectangle = ";
    cin>>length;
    cout<<"Enter width of rectangle = ";
    cin>>width;
    AreaCalculator obj(length,width);
    obj.displayArea();
    return 0;
}