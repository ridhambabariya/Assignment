/*
Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance
*/
#include <iostream>
#include <string>
using namespace std;
class Cricketer
{
protected:
    string name;
    int age;
public:
    void inputData()
    {
        cout<<"Enter the name = ";
        cin>>name;
        cout<<"Enter the age = ";
        cin>>age;
    }
    void displayData()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
    }
};
class Batsman : public Cricketer
{
private:
    int totalrun;
    double averagerun;
    int best;
public:
    void inputData()
    {
        Cricketer::inputData();
        cout<<"Enter total runs = ";
        cin>>totalrun;
        cout<<"Enter best performance = ";
        cin>>best;
    }
    void calculateAverageRuns()
    {
        averagerun = totalrun/5.0;
    }
    void displayData()
    {
        Cricketer::displayData();
        cout<<"Total Runs = "<<totalrun<<endl;
        cout<<"Average Runs = "<<averagerun<<endl;
        cout<<"Best Performance = "<<best<<endl;
    }
};
int main()
{
    Batsman batsman;
    cout<<"Enter Batsman details : "<<endl;
    batsman.inputData();
    batsman.calculateAverageRuns();
    cout<<"\nBatsman Details : "<<endl;
    batsman.displayData();
    return 0;
}