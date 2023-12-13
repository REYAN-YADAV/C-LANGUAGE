//WAP to read a number.print whether it is perfect number is or not?
/*  
A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.
 In other words, the sum of the positive divisors of a perfect number (excluding the number itself) is equal to the number.
The smallest perfect number is 6, which has divisors 1, 2, and 3.
*/

#include<stdio.h>
int main()
{
    int num, sum=0, i;
    printf("Enter a number = ");
    scanf("%d",&num);
    for(i=1; i<num; i++)
    {
        if(num%i == 0)      // to calculcate factor of num
            sum = sum +i;
    }
    if(sum == num)
        printf("It is perfect number");
    else
        printf("Not perfect number");
    return  0;
}