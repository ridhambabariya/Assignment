/*Write a program of to sort the array using templates*/
#include <iostream>
using namespace std;
template<typename T,int size>
void sortArray(T (&arr)[size])
{
    int i;
    for(i = 0;i < size-1;i++)
    {
        for(j = 0;j < size-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int intArray[] = {5,2,8,1,6},intsize,i;
    intsize = sizeof(intArray)/sizeof(int);
    cout<<"Before sorting : ";
    for(i = 0;i < intsize;i++)
    {
        cout<<intArray[i]<<" ";
    }
    cout<<endl;
    sortArray(intArray);
    cout<<"After sorting : ";
    for(i = 0;i < intsize;i++)
    {
        cout<<intArray[i]<<" ";
    }
    cout<<endl;
    int doublesize;
    double doubleArray[] = {3.14,1.618,2.718,0.577};
    doublesize = sizeof(doubleArray)/sizeof(double);
    cout<<"Before sorting = ";
    for(i = 0;i < doublesize;i++)
    {
        cout<<doubleArray[i]<<" ";
    }
    cout<<endl;
    sortArray(doubleArray);
    cout<<"After sorting = ";
    for(i = 0;i < doublesize;i++)
    {
        cout<<doubleArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}