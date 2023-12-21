// WAP to test given number is odd or even with fuction and  with argument and without return model

#include<stdio.h>
// function for determine odd and even
void odd_even(int num)
{
    if(num % 2 == 0)
        printf("even");
    else
        printf("odd");
}
void main()
{
    void odd_even(int);
    int num;
    // to read number
    printf("Enter a number = ");
    scanf("%d",&num);
    odd_even(num);
}