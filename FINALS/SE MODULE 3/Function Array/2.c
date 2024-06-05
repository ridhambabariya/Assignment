/*WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)*/
#include <stdio.h>
#define p printf
#define s scanf
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
int main()
{
    char operation;
    float num1, num2;
    p("Choose an option = ");
    p("\n1.Addition");
    p("\n2.Subtraction");
    p("\n3.Multiplication");
    p("\n4.Division");
    p("\nEnter your choice (1-4): ");
    s(" %c",&operation);
    p("Enter the value of num1 = ");
    s("%f",&num1);
    p("Enter the value of num2 = ");
    s("%f",&num2);
    switch(operation)
    {
        case '+':
            p("\nAddition = %.2f",add(num1,num2));
            break;
        case '-':
            p("\nSubtraction = %.2f",subtract(num1,num2));
            break;
        case '*':
            p("\nMultiply = %.2f",multiply(num1,num2));
            break;
        case '/':
            p("\nDivision = %.2f",divide(num1,num2));
            break;
        default:
            p("\nInvalid choice!");
    }
    return 0;
}

float add(float a,float b)
{
    return a+b;
}
float subtract(float a,float b)
{
    return a-b;
}
float multiply(float a,float b)
{
    return a*b;
}
float divide(float a,float b)
{
    return a/b;
}