// WAP to read a number and print whether it is Armstrong or not?
/*
    
An Armstrong number (also known as a narcissistic number, pluperfect digital invariant, or pluperfect number)
 is a number that is the sum of its own digits each raised to the power of the number of digits.
  In other words, an n-digit number is an Armstrong number if the sum of its own digits, 
  each raised to the power of n, is equal to the number itself.


*/
#include<stdio.h>
#include<math.h>
int main()
{
    int no, rem, sum =0, duplicate,digit ;          // rem = remainder of the number
    printf("Enter a number = ");           // digit will store the digit number in original number
    scanf("%d",&no);
    duplicate = no;
    // count no number of digit in original number
    while(no!=0)
    {
        no =no/10;
        digit++;
    }
    no = duplicate; // reset the number to original number
    while(no!=0)
    {
        rem = no%10;
        sum = pow(rem, digit) + sum;
        no = no/10;
    }
    if(sum == duplicate)
        printf("IT is Armstrong number");
    else
        printf("it is not a Armstrong number");
    return 0;
}