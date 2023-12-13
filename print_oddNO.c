//WAP to print odd number from 1 to 100?
#include<stdio.h>
void main()
{
    int i=1;
    while(i<=100)
    {
        if(i%2!=0)
            printf("%3d",i);
        i++;
    }

}