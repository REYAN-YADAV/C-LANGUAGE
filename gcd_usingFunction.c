// WAP to find gcd of 2 number using recursion function.
#include<stdio.h>
void gcd(int a, int b)
{
    int rem = a % b;
    if(rem == 0)
        printf("gcd = %d",b);
    else
        gcd(b,rem);
}
void main()
{
    int a,b,rem;
    printf("Enter 2 no = ");
    scanf("%d%d",&a, &b);
    gcd(a,b);
}