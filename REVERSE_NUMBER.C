// WAP to read a number and find the reverse of that number?
#include<stdio.h>
int main()
{
    int no, rem, reverse =0;          // rem = remainder of the number
    printf("Enter a number = ");
    scanf("%d",&no);
    while(no!=0)
    {
        rem = no%10;
        no = no/10;
        reverse = reverse*10 + rem;
    }
    printf("Reverse = %d",reverse);
    return 0;
}