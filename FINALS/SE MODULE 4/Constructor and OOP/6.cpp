/*
Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor
*/
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int empid;
    long int salary;
public:
    Employee(string empName = "Unknown",int empID = 0,long int empSalary = 0.0)
    {
        name = empName;
        empid = empID;
        salary = empSalary;
    }
    void setName(string empName)
    {
        name = empName;
    }
    void setEmployeeID(int empID)
    {
        empid = empID;
    }
    void setSalary(long int performance)
    {
        salary = salary*performance;
    }
    string getName() const
    {
        return name;
    }
    int getEmployeeID() const
    {
        return empid;
    }
    long int getSalary() const
    {
        return salary;
    }
};
int main()
{
    Employee emp1;
    cout<<"\nEmployee Name = "<<emp1.getName()<<endl;
    cout<<"\nEmployee ID = "<<emp1.getEmployeeID()<<endl;
    cout<<"\nSalary = "<<emp1.getSalary()<<endl;
    emp1.setName("John Doe");
    emp1.setEmployeeID(1001);
    emp1.setSalary(1.1);
    cout<<"\nUpdated Employee Details : "<<endl;
    cout<<"\nEmployee Name = "<<emp1.getName()<<endl;
    cout<<"\nEmployee ID = "<<emp1.getEmployeeID()<<endl;
    cout<<"\nSalary = "<<emp1.getSalary()<<endl;
    return 0;
}