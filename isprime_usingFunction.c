// wap to read a number find is prime.
#include<stdio.h>
void isprime(int no)
{
    int i, count=0;
    for(i=1; i<=no; i++){
        if(no % i == 0)
            count++;
    }
    if(count == 2)
        printf("prime number");
    else
        printf("not prime number");

}
void main()
{
    int no;
    printf("Enter a number = ");
    scanf("%d",&no);
    isprime(no);
}