// WAP to swap to 2 number with function that without argument and return.

#include<stdio.h>
void swap()
{
    int a,b,t;
    // read 2 num
    printf("Enter 2 number a and b = ");
    scanf("%d%d", &a, &b);
    // method to swAP
    t = a;
    a = b;
    b = t;
    printf("a = %d",a);
    printf("\nb = %d",b);
}
void main()
{
    void swap();
    swap();
}