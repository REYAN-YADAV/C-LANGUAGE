//WAP TO FIND SUM OF 2 NUMBER USING LOOP?
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter 2 number = ");
    scanf("%d%d",&a, &b);
    while(b!=0)
    {
        a++;
        b--;
    }
    printf("sum = %d",a);
    return 0;

}