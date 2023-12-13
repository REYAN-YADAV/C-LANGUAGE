// WAP to divide 2 number using loop?
#include<stdio.h>
void main()
{
    int a,b,R=0;
    printf("Enter 2 num =  ");
    scanf("%d%d",&a, &b);
    while(a>=b)
    {
        R++;
        a=a-b;
    }
    printf("Result = %d",R);
    
}