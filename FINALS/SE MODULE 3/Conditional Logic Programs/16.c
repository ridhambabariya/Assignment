/*
Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    float tmp;
    p("Enter the temperature here = ");
    s("%f",&tmp);
    if(tmp<0)
    {
        p("\nFreezing weather");
    }
    else if(tmp>=0 && tmp<10)
    {
        p("\nVery Cold weather");
    }
    else if(tmp>=10 && tmp<20)
    {
        p("\nCold weather");
    }
    else if(tmp>=20 && tmp<30)
    {
        p("\nNormal in Temp");
    }
    else if(tmp>=30 && tmp<40)
    {
        p("\nIts Hot");
    }
    else
    {
        p("\nIts Very Hot");
    }
    return 0;
}