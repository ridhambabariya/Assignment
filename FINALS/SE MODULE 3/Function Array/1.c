/*Write a program to find out the max number from given array using function*/
#include <stdio.h>
#define p printf
#define s scanf
int findMax(int arr[],int size)
{
    int max = arr[0],i;
    for (i = 1;i < size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int size,i,max;
    p("\nEnter the size of the array = ");
    s("%d",&size);
    int arr[size];
    for (i = 0;i < size;i++)
    {
        s("%d",&arr[i]);
    }
    int max = findMax(arr, size);
    p("\nThe maximum number in the array is = %d",max);
    return 0;
}