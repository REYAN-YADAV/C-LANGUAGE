// WAP to read power unit consume find the bill amount based on given table?
/*
        units                   price
        <100                    2.52
        <200                    3.75
        else                    5.10
*/
#include<stdio.h>
void main()
{
    int unit;
    float bill;
    printf("Enter the power consumed = ");
    scanf("%d", &unit);
    //bill = unit*price;
    if(unit<100)
        bill = unit*2.52;
    else if(unit<200)
        bill = unit*3.75;
    else
        bill = unit*5.10;
    printf("bill = %.2f",bill);
}