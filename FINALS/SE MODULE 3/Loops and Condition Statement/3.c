/*
WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int number;  
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0; 
    for(int i=1;i<=10;i++)
    {
        p("\nEnter number %d = ",i);
        s("%d",&number);
        if(number%2 == 0)
        {
            evenCount++;  
            evenSum = evenSum+number; 
        }
        else
        {
            oddCount++;
            oddSum = oddSum+number;
        }
    }
    p("\nTotal even numbers = %d",evenCount);
    p("\nTotal odd numbers = %d",oddCount);
    p("\nSum of even numbers = %d",evenSum);
    p("\nSum of odd numbers = %d",oddSum);
    return 0;
}