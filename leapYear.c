// WAP to read a year and find out it is leap year or not?
#include<stdio.h>
void main()
{
    int year;
    printf("Enter a year = ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("%d is leap year",year);
    else
        printf("%d is not leap year",year);
        
}