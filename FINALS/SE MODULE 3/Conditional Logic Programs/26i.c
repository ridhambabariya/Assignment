/*WAP to show Monday to Sunday using switch case*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int day;
    p("Enter the day number = ");
    s("%d",&day);
    switch(day)
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
            p("Invalid day number. Please enter a number between 1 and 7.\n");
            break;
    }
   return 0;
}