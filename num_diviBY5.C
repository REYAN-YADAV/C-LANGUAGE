//WAP to print the number those divisible by 5 from 1 to 100
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=100)
    {
        if(i%5==0)
            printf("%3d",i);
        if(i%25==0)
            printf("\n");  //add newlines after every 5 numbers
        i++;
    }
    return 0;
}