/*Store 5 numbers in array and sort it in ascending order*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int numbers[5],i,j,temp;
    p("\nEnter 5 numbers = ");
    for(i = 0;i < 5;i++)
    {
        p("\nNumber %d = ",i+1);
        s("%d",&numbers[i]);
    }
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 4-i;j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    p("\nNumbers in ascending order = ");
    for(i = 0;i < 5;i++)
    {
        p("%d ",numbers[i]);
    }
    p("\n");
    return 0;
}