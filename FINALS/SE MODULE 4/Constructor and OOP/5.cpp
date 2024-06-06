/*
Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene
*/
#include <iostream>
using namespace std;
class Triangle
{
private:
    int side1, side2, side3;
public:
    Triangle(int s1,int s2,int s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    bool isEquilateral()
    {
        return (side1 == side2 && side2 == side3);
    }
    bool isIsosceles()
    {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }
    bool isScalene()
    {
        return (!isEquilateral() && !isIsosceles());
    }
};
int main()
{
    Triangle triangle1(3,3,3);
    Triangle triangle2(3,4,4);
    Triangle triangle3(3,4,5);
    cout<<"Triangle 1 is "<<(triangle1.isEquilateral() ? "equilateral" : "not equilateral")<<endl;
    cout<<"Triangle 2 is "<<(triangle2.isIsosceles() ? "isosceles" : "not isosceles")<<endl;
    cout<<"Triangle 3 is "<<(triangle3.isScalene() ? "scalene" : "not scalene")<<endl;
    return 0;
}