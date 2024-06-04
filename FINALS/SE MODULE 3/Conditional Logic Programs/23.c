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
            p("January\n");
            break;
        case 2:
            p("February\n");
            break;
        case 3:
            p("March\n");
            break;
        case 4:
            p("April\n");
            break;
        case 5:
            p("May\n");
            break;
        case 6:
            p("June\n");
            break;
        case 7:
            p("July\n");
            break;
        case 8:
            p("August\n");
            break;
        case 9:
            p("September\n");
            break;
        case 10:
            p("October\n");
            break;
        case 11:
            p("November\n");
            break;
        case 12:
            p("December\n");
            break;
        default:
            p("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }
    return 0;
}
