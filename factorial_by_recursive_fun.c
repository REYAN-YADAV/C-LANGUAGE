// WAP to calculate factorial of given number by recursive function.

#include<stdio.h>
// function to calculate factorial
int fact(int num)
{
    
    if(num == 1)
        return 1;
    else
        return num*fact(num-1);
}
void main()
{
    int fact();
    int num, r;
    // to read num
    printf("Enter a number = ");
    scanf("%d", &num);
    // to display factorial
    r = fact(num);
    printf("factorial  = %d",r);
} 