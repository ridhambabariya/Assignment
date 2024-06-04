/*Accept month number and display month name*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int num;
    p("Enter the month number = ");
    s("%d",&num);
    switch(num)
    {
        case 1:
            p("\nJanuary");
            break;
        case 2:
            p("\nFebruary");
            break;
        case 3:
            p("\nMarch");
            break;
        case 4:
            p("\nApril");
            break;
        case 5:
            p("\nMay");
            break;
        case 6:
            p("\nJune");
            break;
        case 7:
            p("\nJuly");
            break;
        case 8:
            p("\nAugust");
            break;
        case 9:
            p("\nSeptember");
            break;
        case 10:
            p("\nOctober");
            break;
        case 11:
            p("\nNovember");
            break;
        case 12:
            p("\nDecember");
            break;
        default:
            p("\nInvalid month number. Please enter a number between 1 and 12.");
            break;
    }
    return 0;
}