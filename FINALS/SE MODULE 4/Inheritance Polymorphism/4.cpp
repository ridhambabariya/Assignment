/*Write a C++ Program display Student Mark sheet using Multiple inheritance*/
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
class Marks
{
protected:
    int math;
    int science;
    int english;

public:
    Marks(int m, int s, int e)
    {
        math = m;
        science = s;
        english = e;
    }
    void readMarks()
    {
        cout<<"Enter Math Marks = ";
        cin>>math;
        cout<<"Enter Science Marks = ";
        cin>>science;
        cout<<"Enter English Marks = ";
        cin>>english;
    }
    void displayMarks()
    {
        cout<<"Math Marks: "<<math<<endl;
        cout<<"Science Marks = "<<science<<endl;
        cout<<"English Marks = "<<english<<endl;
    }
};
class StudentSheet : public Person, public Marks {
public:
    StudentSheet(string n,int a,int m,int s,int e) : Person(n, a), Marks(m, s, e) {}
    void displayMarkSheet()
    {
        cout<<"\nStudent Mark Sheet = "<<endl;
        displayData();
        displayMarks();
    }
};
int main() {
    string name;
    int age,math,science,english;
    cout<<"Enter Student details : "<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Enter name = ";
    cin>>name;
    cout<<"Enter age = ";
    cin>>age;
    cout<<"\nEnter Student marks = "<<endl;
    cout<<"Enter Math Marks = ";
    cin>>math;
    cout<<"Enter Science Marks = ";
    cin>>science;
    cout<<"Enter English Marks = ";
    cin>>english;
    StudentSheet student(name, age, math, science, english);
    student.displayMarkSheet();
    return 0;
}