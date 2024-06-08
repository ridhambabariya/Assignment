/*
Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation
*/
#include <iostream>
#include <string>
using namespace std;
struct Address
{
    string street;
    string city;
    string state;
    int pincode;
};
class Student
{
private:
    string name;
    string classname;
    int rollnum;
    int marks;
    char grade;
    Address address;
public:
    Student(string n,string cls,int roll,int m,char g,Address addr)
    {
        name = n;
        classname = cls;
        rollnum = roll;
        marks = m;
        grade = g;
        address = addr;
    }
    void calculateGrade()
    {
        if(marks >= 90)
        {
            grade = 'A';
        }
        else if(marks >= 80)
        {
            grade = 'B';
        }
        else if(marks >= 70)
        {
            grade = 'C';
        }
        else if(marks >= 60)
        {
            grade = 'D';
        }
        else if(marks >= 50)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }
    }
    void displayInfo()
    {
        cout<<"\nName = "<<name<<endl;
        cout<<"\nClass = "<<classname<<endl;
        cout<<"\nRoll Number = "<<rollnum<<endl;
        cout<<"\nMarks = "<<marks<<endl;
        cout<<"\nGrade = "<<grade<<endl;
        cout<<"\nAddress = "<<address.street<<", "<<address.city<<", "<<address.state<<", "<<address.pincode<<endl;
    }
};
int main()
{
    Address addr1 = {"Street 1","City 1","State 1",123456};
    Address addr2 = {"Street 2","City 2","State 2",654321};
    Student student1("John","Class 10",101,85,' ',addr1);
    Student student2("Alice","Class 12",201,95,' ',addr2);
    student1.calculateGrade();
    student2.calculateGrade();
    cout<<"Student 1 Information : "<<endl;
    student1.displayInfo();
    cout<<endl;
    cout<<"Student 2 Information : "<<endl;
    student2.displayInfo();
    return 0;
}