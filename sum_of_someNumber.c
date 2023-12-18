// WAP to read some number and find the sum of this number?

#include<stdio.h>
void main()
{
    int num, sum = 0;
    char ch;
    do
    {
       printf(" Enter a num = ");
       scanf("%d",&num); 
       sum = sum + num;
       printf("Do you want to add one more number  (Y/N)= ");
       scanf(" %c", &ch);
    } while (ch == 'Y');
    printf("sum = %d",sum);
    
}