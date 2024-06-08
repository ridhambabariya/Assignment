/*
Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
*/
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person(string n,int a)
    {
        name = n;
        age = a;
    }
    void readData()
    {
        cout<<"Enter name = ";
        cin>>name;
        cout<<"Enter age = ";
        cin>>age;
    }
    void displayData()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
    }
};
class Student : public Person
{
protected:
    double percentage;
public:
    Student(string n,int a,double p) : Person(n, a)
    {
        percentage = p;
    }
    void readData()
    {
        Person::readData();
        cout<<"Enter percentage = ";
        cin>>percentage;
    }
    void displayData()
    {
        Person::displayData();
        cout<<"Percentage = "<<percentage<<endl;
    }
};
class Teacher : public Person
{
protected:
    double salary;
public:
    Teacher(string n,int a,double s) : Person(n, a)
    {
        salary = s;
    }
    void readData()
    {
        Person::readData();
        cout<<"Enter salary = ";
        cin>>salary;
    }
    void displayData()
    {
        Person::displayData();
        cout<<"Salary = "<<salary<<endl;
    }
};
int main()
{
    Student student("John",20,85.5);
    Teacher teacher("Alice",30,50000);
    cout<<"Enter Student details = "<<endl;
    student.readData();
    cout<<"\nStudent Details = "<<endl;
    student.displayData();
    cout<<"\nEnter Teacher details = "<<endl;
    teacher.readData();
    cout<<"\nTeacher Details = "<<endl;
    teacher.displayData();
    return 0;
}