//WAP to print the number those divisible by 7 or 11?
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=100)
    {
        if(i%7==0 || i%11==0)
            printf("%3d",i);
        if(i%50==0)
            printf("\n");
        i++;               
    }
    return 0;
    
}