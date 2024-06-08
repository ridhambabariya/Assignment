/*Perform 2D matrix array*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int rows,cols,i,j;
    p("\nEnter the number of rows = ");
    s("%d",&rows);
    p("\nEnter the number of columns = ");
    s("%d",&cols);
    int matrix[rows][cols];
    p("\nEnter the elements of the matrix = ");
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            p("\nElement [%d][%d] = ",i,j);
            s("%d",&matrix[i][j]);
        }
    }
    p("\nThe matrix is = ");
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            p("%d ",matrix[i][j]);
        }
        p("\n");
    }
    int sum = 0;
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            sum = sum+matrix[i][j];
        }
    }
    p("\nSum of all elements in the matrix = %d",sum);
    return 0;
}