// WAP to subtract 2 number using loop?
#include<stdio.h>
void main()
{
    int a,b,minus;
    printf("Enter 2 num =  ");
    scanf("%d%d",&a, &b);
    while(b!=0)
    {
        a--;
        b--;
    }
    printf("subtraction = %d",a);
    
}