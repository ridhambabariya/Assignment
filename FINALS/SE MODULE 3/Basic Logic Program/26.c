/*
Convert temperature Fahrenheit to Celsius
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    float tempc,tempf;
    p("Enter the temperature in Fahrenhit = ");
    s("%f",&tempf);
    tempc = (tempf - 32) * (9/5);
    p("The temperature in Celsius will be = %ld",tempc);
}