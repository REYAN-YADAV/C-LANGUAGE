// WAP to read some number and count the odd and even number?

#include<stdio.h>
void main()
{
    int num, codd = 0, ceven = 0;
    char ch;
    do
    {
        printf("Enter a number = ");
        scanf("%d",&num);
        if(num % 2 == 0)
            ceven++;
        else
            codd++;
        printf("Do you want check another num = ");
        scanf(" %c",&ch);
    } while (ch =='Y');
    printf("odd count = %d",codd);
    printf("\neven count = %d",ceven);     
}