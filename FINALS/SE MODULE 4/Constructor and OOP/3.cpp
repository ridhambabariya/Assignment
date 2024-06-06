/*Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables*/
#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string company;
    string model;
    int year;
public:
    Car(string company,string model,int year)
    {
        this->company = company;
        this->model = model;
        this->year = year;
    }
    string getCompany()
    {
        return company;
    }
    void setCompany(string company)
    {
        this->company = company;
    }
    string getModel()
    {
        return model;
    }
    void setModel(string model)
    {
        this->model = model;
    }
    int getYear()
    {
        return year;
    }
    void setYear(int year)
    {
        this->year = year;
    }
};
int main()
{
    Car myCar("Toyota", "Camry", 2022);
    cout<<"Company = "<<myCar.getCompany()<<endl;
    cout<<"Model = "<<myCar.getModel()<<endl;
    cout<<"Year = "<<myCar.getYear()<<endl;
    myCar.setCompany("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2023);
    cout<<"\nUpdated details = "<<endl;
    cout<<"Company = "<<myCar.getCompany()<<endl;
    cout<<"Model = "<<myCar.getModel()<<endl;
    cout<<"Year = "<<myCar.getYear()<<endl;
    return 0;
}