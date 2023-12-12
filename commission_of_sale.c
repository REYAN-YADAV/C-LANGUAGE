// WAP to read sales done by a sales man.print commission based on following table?
// sales         commission
/* 
    <5000           0
    <10000          200
    else            400          
*/
#include<stdio.h>
void main()
{
    int sales;
    printf("Enter amount of sales = ");
    scanf("%d",&sales);
    if(sales<=5000)
        printf("comission is 100");
    else if(sales<=10000)
        printf("comission is 200");
    else
        printf("comission is 500");
}