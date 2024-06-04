/*
Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/
#include<stdio.h>
#define p printf
#define s scanf
int main()
{
    double principal,rate,time,ci,amount;
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