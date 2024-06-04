/*Write a C program to calculate profit and loss on a transaction*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int cost,sell,profit,loss;
    p("Enter the cost =  ");
    s("%d",&cost);
    p("\nEnter the sell =  ");
    s("%d",&sell);
    if (sell>cost)
    {
        profit = sell-cost;
        p("\nProfit = %d",profit);
    }
    else if(cost>sell)
    {
        loss = cost-sell;
        p("\nLoss = %d",loss);
    }
    else
    {
        p("\nNo profit, no loss");
    }
    return 0;
}