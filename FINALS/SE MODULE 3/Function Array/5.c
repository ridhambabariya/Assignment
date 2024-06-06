/*WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice*/
#include <stdio.h>
#define p printf
#define s scanf
void sortasc(int arr[],int size)
{
    int i,j,temp;
    for(i = 0;i < size-1;i++)
    {
        for(j = 0;j < size-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void sortdsc(int arr[],int size)
{
    int i,j,temp;
    for(i = 0;i < size-1;i++)
    {
        for(j = 0;j < size-1-i;j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[],int size)
{
    int i,j;
    for(i = 0;i < size;i++)
    {
        p("%d ",arr[i]);
    }
    p("\n");
}
int main()
{
    int size1,size2,choice,i;
    p("\nEnter the size of the first array = ");
    s("%d",&size1);
    int arr1[size1];
    p("\nEnter the elements of the first array = ");
    for(i = 0;i < size1;i++)
    {
        s("%d",&arr1[i]);
    }
    p("Enter the size of the second array = ");
    s("%d",&size2);
    int arr2[size2];
    p("\nEnter the elements of the second array = ");
    for(i = 0;i < size2;i++)
    {
        s("%d",&arr2[i]);
    }
    p("\n1.Ascending");
    p("\n2.Descending");
    p("\nEnter the choice = ");
    s("%d",&choice);
    if(choice == 1)
    {
        sortasc(arr1,size1);
        sortasc(arr2,size2);
    }
    else if(choice == 2)
    {
        sortdsc(arr1,size1);
        sortdsc(arr2,size2);
    }
    else
    {
        p("\nInvalid choice!");
        return 1;
    }
    p("\nFirst Sorted array = ");
    printArray(arr1,size1);
    p("\nSecond sorted array = ");
    printArray(arr2,size2);
    return 0;
}