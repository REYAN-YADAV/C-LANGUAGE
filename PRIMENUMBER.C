//WAP to read a number.find the number is prime or not ?
#include<stdio.h>
int main()
{
    int no,i,count=0;
    printf("Enter a number  = ");
    scanf("%d",&no);
    for(i=1; i<=no; i++)
    {
        if(no%i == 0)
            count++;
    }
    if(count == 2)
        printf("it is prime number");
    else
        printf("not prime number");
    return 0;
}