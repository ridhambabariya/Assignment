/*
Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int rollnum;
public:
    Student(int roll)
    {
        rollnum = roll;
    }
    void displayrollnum()
    {
        cout<<"Roll Number = "<<rollnum<<endl;
    }
};
class Test : public Student
{
protected:
    int sub1marks;
    int sub2marks;
public:
    Test(int roll,int marks1,int marks2) : Student(roll)
    {
        sub1marks = marks1;
        sub2marks = marks2;
    }
    void displayTestMarks()
    {
        cout<<"Subject 1 Marks = "<<sub1marks<<endl;
        cout<<"Subject 2 Marks = "<<sub2marks<<endl;
    }
};
class Result : public Test
{
protected:
    int totalMarks;
public:
    Result(int roll,int marks1,int marks2) : Test(roll, marks1, marks2)
    {
        totalMarks = sub1marks+sub2marks;
    }
    void displayTotalMarks()
    {
        cout<<"Total Marks = "<<totalMarks<<endl;
    }
};
int main()
{
    int roll,marks1,marks2;
    cout<<"Enter Roll Number = ";
    cin>>roll;
    cout<<"Enter Subject 1 Marks = ";
    cin>>marks1;
    cout<<"Enter Subject 2 Marks = ";
    cin>>marks2;
    Result result(roll,marks1,marks2);
    cout<<"\nStudent Details = "<<endl;
    result.displayrollnum();
    cout<<"\nTest Marks = "<<endl;
    result.displayTestMarks();
    cout<<"\nResult = "<<endl;
    result.displayTotalMarks();
    return 0;
}