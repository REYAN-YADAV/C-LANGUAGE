// WAP to multiply 2 number using loop?
#include<stdio.h>
void main()
{
    int a,b,R=0;
    printf("Enter 2 num =  ");
    scanf("%d%d",&a, &b);
    while(b!=0)
    {
        R = R+a;
        b--;
    }
    printf("multiplication = %d",R);
    
}