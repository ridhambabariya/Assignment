/*
Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter
*/
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle(int l,int w)
    {
        length = l;
        width = w;
    }
    int area() const
    {
        return length*width;
    }
    int perimeter() const
    {
        return 2*(length+width);
    }
    void setLength(int l)
    {
        length = l;
    }
    void setWidth(int w)
    {
        width = w;
    }
    int getLength() const
    {
        return length;
    }
    int getWidth() const
    {
        return width;
    }
    void display() const
    {
        cout<<"Length = "<<length<<endl;
        cout<<"Width= "<<width<<endl;
        cout<<"Area = "<<area()<<endl;
        cout<<"Perimeter = "<<perimeter()<<endl;
    }
};
int main()
{
    int length,width;
    cout<<"Enter the length = ";
    cin>>length;
    cout<<"Enter the width = ";
    cin>>width;
    Rectangle r1(length,width);
    r1.display();
    return 0;
}