// WAP to read 2 number ,find the big number without using coditional operator or without using if-else?
#include<stdio.h>
void main(){
    int a,b,big;
    printf("Enter the value of a and b = ");
    scanf("%d%d",&a,&b);
    big=((a+b)+abs(a-b))/2;
    printf("big=%d",big);
    
}
/*
 big=((a+b)+abs(a-b))/2;
 suppose a=20 and b=40
 big=((20+40)+abs(20-40))/2 
 big=(60 +abs(-20))/2
 big=(60+20)/2
 big=40
*/