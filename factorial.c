// WAP to read a number and find its factorial value.
#include<stdio.h>
int main()
{
    int num,factorial=1,i;
    printf("Enter a number = ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        factorial = factorial*i; 
    }
    printf("factorial = %d",factorial);
    return 0;
}