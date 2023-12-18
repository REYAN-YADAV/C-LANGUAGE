#include<stdio.h>
void main()
{
    for(int i=1; i<=100; i++){
        printf("%4d",i);
        if(i==20)
            break;
    }
}