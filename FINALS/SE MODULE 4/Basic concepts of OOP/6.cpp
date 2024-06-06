/*
Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables
*/
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string country;
public:
    void setName(const string &n)
    {
        name = n;
    }
    string getName() const
    {
        return name;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge() const
    {
        return age;
    }
    void setCountry(const string &c)
    {
        country = c;
    }
    string getCountry() const
    {
        return country;
    }
    void display() const
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Country = "<<country<<endl;
    }
};
int main()
{
    Person p1;
    string name;
    int age;
    string country;
    cout<<"Enter the name = ";
    getline(cin,name);
    cout<<"Enter the age = ";
    cin>>age;
    cin.ignore();
    cout<<"Enter the country = ";
    getline(cin,country);
    p1.setName(name);
    p1.setAge(age);
    p1.setCountry(country);
    p1.display();
    return 0;
}