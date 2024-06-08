/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include <iostream>
using namespace std;
class Matrix
{
private:
    int size;
    int *arr;
public:
    Matrix(int s) : size(s)
    {
        arr = new int[size];
    }
    ~Matrix()
    {
        delete[] arr;
    }
    Matrix operator+(const Matrix &m)
    {
        int i;
        Matrix result(size);
        for(i = 0;i < size;i++)
        {
            result.arr[i] = arr[i]+m.arr[i];
        }
        return result;
    }
    void inputMatrix()
    {
        int i;
        cout<<"Enter elements of matrix = "<<endl;
        for(i = 0;i < size;i++)
        {
            cout<<"Enter element "<<i+1<<" = ";
            cin>>arr[i];
        }
    }
    void displayMatrix()
    {
        int i;
        cout<<"Matrix:"<<endl;
        for(i = 0;i < size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int size;
    cout<<"Enter size of matrix = ";
    cin>>size;
    Matrix matrix1(size),matrix2(size);
    cout<<"For Matrix 1 = "<<endl;
    matrix1.inputMatrix();
    cout<<"For Matrix 2 = "<<endl;
    matrix2.inputMatrix();
    Matrix result = matrix1+matrix2;
    matrix1.displayMatrix();
    matrix2.displayMatrix();
    result.displayMatrix();
    return 0;
}