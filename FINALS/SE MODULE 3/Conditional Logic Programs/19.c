/*
Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :

Unit                                                                 
 upto 350                                                1.20/-
 350 and above but less than 600           1.50/-
 600 and above but less than 800           1.80/-
 800 and above                                        2.00/-

If bill exceeds Rs. 800 then a surcharge of 18% will be charged and 
the minimum bill should be of Rs. 256/-
*/
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int cid;
    char name[50];
    float unit,total,charge;
    p("Enter Customer ID = ");
    s("%d",&cid);
    p("\nEnter Customer Name = ");
    s("%s",name);
    p("\nEnter units consumed = ");
    s("%f",unit);
    if (unit<=350)
    {
        total = unit*1.20;
    }
    else if(unit<600)
    {
        total = 350*1.20+(unit-350)*1.50;
    }
    else if(unit<800)
    {
        total = 350*1.20+250*1.50+(unit-600)*1.80;
    }
    else
    {
        total = 350*1.20+250*1.50+200*1.80+(unit-800)*2.00;
    }
    if(total>800)
    {
        charge = total*0.18;
        total = total+charge;
    }
    if(total<256)
    {
        total=256;
    }
    p("\nElectricity Bill");
    p("\nCustomer ID = %d",cid);
    p("\nCustomer Name = %s",name);
    p("\nUnits Consumed = %.2f",unit);
    p("\nTotal Amount = Rs. %.2f",total);
    return 0;
}