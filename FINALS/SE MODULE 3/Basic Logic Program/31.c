/*
Convert kilometers into meters
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    long int km;
    p("Enter the number of kilometeres = ");
    s("%ld",&km);
    p("\n%ld Kilometeres = %ld meter",km*1000);
    return 0;
}