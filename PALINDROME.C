// WAP to read a number and print whether it is palindrome or not?
/*
    A palindrome number is a number that reads the same backward as forward. 
    In other words, a palindrome number remains unchanged
    when its digits are reversed. 
*/
#include<stdio.h>
int main()
{
    int no, rem, reverse =0, duplicate ;          // rem = remainder of the number
    printf("Enter a number = ");
    scanf("%d",&no);
    duplicate = no;
    while(no!=0)
    {
        rem = no%10;
        reverse = reverse*10 + rem;
        no = no/10;
    }
    if(reverse == duplicate)
        printf("IT is palindrome number");
    else
        printf("it is not a palindrome number");
    return 0;
}