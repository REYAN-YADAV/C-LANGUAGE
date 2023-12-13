//WAP to read a number and find whether it is strong number or not?
/*

A strong number (or digital factorial) is a number such that the sum of its individual digits, each factorialized 
(or raised to the power of the digit itself), is equal to the number itself.
In other words, the sum of the factorials of the individual digits is equal to the number.
*/
#include<stdio.h>
int main()
{
    int num,fac,rem,sum=0,duplicate;
    printf("Enter a number = ");
    scanf("%d",&num);
    for(duplicate = num; num!=0;)
    {
        rem = num%10;
        fac = 1;            // initialize the factorial to 1 before inner loop
        for(int i=1; i<=rem; i++)
        {
            fac = fac*i;
        }
        sum = sum + fac;
        num =  num/10;
    }
    if(sum  == duplicate)
        printf("It is strong number");
    else
        printf("not strong number");
    return 0;

}
