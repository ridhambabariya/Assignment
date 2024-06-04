/*
Calculate compound interest
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    long int principal,rate,time,ci,amount;
    p("Enter Principal = ");
    s("%ld",&principal);
    p("\nEnter the interest rate = ");
    s("%ld",&rate);
    p("\nEnter the time period = ");
    s("%ld",&time);
    amount = principal*pow((1+(rate/100)),time);
    ci=amount-principal;
    p("\nYour Coumpound Interest will be %ld",ci);
    return 0;
}