/*Accept 5 names from user at run time.*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char names[5][50];
    int i;
    for(i=0;i<5;i++)
    {
        p("Enter name %d = ",i+1);
        s("%s",names[i]);
    }
    p("\nThe names entered are = ");
    for(i=0;i<5;i++)
    {
        p("\nName %d = %s",i+1,names[i]);
    }
    return 0;
}