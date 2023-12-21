// WAP to find area of rectangle by using funtion. with argument and with return model

#include<stdio.h>
 // function definition to find area  
int area(int l, int b)
{
    return l*b;
}
void main()
{
    int area(int, int); // function declartion
    int l, b, r;
    
    // read l and b
    printf("Enter length and breath = ");
    scanf("%d%d",&l, &b);
    r = area(l,b);
    printf("Area = %d",r);
}

