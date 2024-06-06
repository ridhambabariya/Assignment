/*Write a program of Addition, Subtraction, Division, Multiplication using constructor*/
#include <iostream>
using namespace std;
class Calculator
{
private:
    float result;
public:
    Calculator()
    {
        result = 0;
    }
    Calculator(float initialValue)
    {
        result = initialValue;
    }
    void add(float value)
    {
        result = result+value;
    }
    void subtract(float value)
    {
        result = result-value;
    }
    void multiply(float value)
    {
        result = result*value;
    }
    void divide(float value)
    {
        if(value != 0)
        {
            result = result/value;
        }
        else
        {
            cout<<"Error! Division by zero!"<<endl;
        }
    }
    float getResult()
    {
        return result;
    }
};
int main()
{
    Calculator calc;
    calc.add(10);
    calc.subtract(5);
    calc.multiply(3);
    calc.divide(2);
    cout<<"Result = "<<calc.getResult()<<endl;
    return 0;
}