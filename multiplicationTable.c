// WAP to read num. print the multiplication table?
#include<stdio.h>
void main()
{
    int no,i;
    printf("Enter a number = ");
    scanf("%d",&no);
    printf("multiplication table");
    for(i=1; i<=10; i++)
    {
        printf("\n%d *%2d = %d",no,i,no*i);
    }
}