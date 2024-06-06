/*WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array*/
#include <stdio.h>
#define p p
#define s s
#define MAX 10
void matrix(int matrix[MAX][MAX],int row,int col)
{
    int i,j;
    p("\nEnter elements of the matrix = ");
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            s("%d",&matrix[i][j]);
        }
    }
}
void print(int matrix[MAX][MAX],int row,int col)
{
    int i,j;
    for(i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            p("%d ",matrix[i][j]);
        }
        p("\n");
    }
}
void add(int matrix1[MAX][MAX],int matrix2[MAX][MAX],int result[MAX][MAX],int row,int col)
{
    int i,j;
    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            result[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }
}
void sub(int matrix1[MAX][MAX],int matrix2[MAX][MAX],int result[MAX][MAX],int row,int col)
{
    int i,j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            result[i][j] = matrix1[i][j]-matrix2[i][j];
        }
    }
}
void multiply(int matrix1[MAX][MAX],int matrix2[MAX][MAX],int result[MAX][MAX],int row1,int col1,int col2)
{
    int i,j,k;
    for(i = 0;i < row1;i++)
    {
        for(j = 0;j < col2;j++)
        {
            result[i][j] = 0;
            for(k = 0;k < col1;k++)
            {
                result[i][j] = result[i][j]+matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}
int main()
{
    int matrix1[MAX][MAX],matrix2[MAX][MAX],result[MAX][MAX];
    int row1,col1,row2,col2;
    p("\nEnter rows = ");
    s("%d",&row1);
    p("\nEnter columns = ");
    s("%d",&col1);
    matrix(matrix1,row1,col1);
    p("\nEnter rows = ");
    s("%d",&row2);
    p("\nEnter columns = ");
    s("%d",&col2);
    matrix(matrix2,row2,col2);
    if (row1 == row2 && col1 == col2)
    {
        add(matrix1,matrix2,result,row1,col1);
        p("\nResult of matrix addition = ");
        print(result,row1,col1);
    }
    else
    {
        p("\nDimensions not matched");
    }
    if(row1 == row2 && col1 == col2)
    {
        sub(matrix1,matrix2,result,row1,col1);
        p("\nResult of matrix subtraction = ");
        print(result,row1,col1);
    }
    else
    {
        p("\nDimensions not matched");
    }
    if(col1 == row2)
    {
        multiply(matrix1,matrix2,result,row1,col1,col2);
        p("Result of matrix multiplication = ");
        print(result,row1,col2);
    }
    else
    {
        p("\nDimensions not matched");
    }
    return 0;
}