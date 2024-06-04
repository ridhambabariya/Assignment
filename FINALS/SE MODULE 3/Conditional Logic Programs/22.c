/*WAP to input the week number and print week day.*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    p("Enter the week number = ");
    s("%d",&num);
    switch (num)
    {
        case 1:
            p("\nMonday");
            break;
        case 2:
            p("\nTuesday");
            break;
        case 3:
            p("\nWednesday");
            break;
        case 4:
            p("\nThursday");
            break;
        case 5:
            p("\nFriday");
            break;
        case 6:
            p("\nSaturday");
            break;
        case 7:
            p("\nSunday");
            break;
        default:
            p("\nInvalid week number. Please enter a number between 1 and 7.");
            break;
    }
    return 0;
}