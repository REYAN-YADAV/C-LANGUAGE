//WAP to read 2 number find the product bu using russian multiplication

#include<stdio.h>
int main ()
{
    int a, b, result=0;
    printf("Enter 2 number a and b = ");
    scanf("%d%d",&a, &b);
    while(a != 0){
        if(a % 2 != 0)
            result = result + b;
        b = b*2;
        a = a/2;
    }
    printf("product of a and b = %d",result);
    return 0;
}