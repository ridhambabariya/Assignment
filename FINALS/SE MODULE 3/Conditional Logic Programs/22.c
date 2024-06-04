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
            p("Monday\n");
            break;
        case 2:
            p("Tuesday\n");
            break;
        case 3:
            p("Wednesday\n");
            break;
        case 4:
            p("Thursday\n");
            break;
        case 5:
            p("Friday\n");
            break;
        case 6:
            p("Saturday\n");
            break;
        case 7:
            p("Sunday\n");
            break;
        default:
            p("Invalid week number. Please enter a number between 1 and 7.");
            break;
    }
    return 0;
}