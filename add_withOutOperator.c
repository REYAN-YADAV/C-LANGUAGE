// WAP to find add witout using operator and using function.
#include<stdio.h>
int sum(int a, int b)
{
    int r = printf("%*c%*c" ,a, ' ', b, ' ');
    return r;
}
void main()
{
    int a, b,r;
    printf("Enter number a and b = ");
    scanf("%d%d",&a, &b);
    r = sum(a,b);
    printf("sum = %d", r);
    return 0;
}