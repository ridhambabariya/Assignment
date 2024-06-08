/*
Write a program to calculate the area of circle, rectangle and triangle using Function Overloading Rectangle: Area * breadth Triangle: ½ *Area* breadth Circle: pi * Area *Area
*/
#include <iostream>
using namespace std;
double calculateArea(double radius)
{
    const double pi = 3.14;
    return pi*radius*radius;
}
double calculateArea(double length,double breadth)
{
    return length*breadth;
}
double calculateArea(double base,double height,char triangle)
{
    if(triangle == 't'||triangle == 'T')
    {
        return 0.5*base*height;
    }
    else
    {
        cout<<"Invalid option!"<<endl;
        return 0;
    }
}
int main()
{
    char shape;
    cout<<"Choose a shape = (C)Circle, (R)Rectangle, (T)Triangle = ";
    cin>>shape;
    if(shape== 'c'||shape == 'C')
    {
        double radius;
        cout<<"Enter the radius of the circle = ";
        cin>>radius;
        cout<<"Area of the circle = "<<calculateArea(radius)<<endl;
    }
    else if(shape == 'r'||shape == 'R')
    {
        double length,breadth;
        cout<<"Enter the length and breadth of the rectangle = ";
        cin>>length>>breadth;
        cout<<"Area of the rectangle = "<<calculateArea(length,breadth)<<endl;
    }
    else if(shape == 't'||shape == 'T')
    {
        double base,height;
        cout<<"Enter the base and height of the triangle = ";
        cin>>base>>height;
        cout<<"Area of the triangle = "<<calculateArea(base,height,'t')<<endl;
    }
    else
    {
        cout<<"Invalid option!"<<endl;
    }
    return 0;
}