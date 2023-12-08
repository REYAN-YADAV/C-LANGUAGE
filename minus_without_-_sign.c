#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter value of a and b= ");
    scanf("%d%d",&a,&b);
    r=a+~b+1;
    printf("sum = %d",r);
    return 0;
}
/* explanation
r = a-~b-1;
suppose  a=60 , b=40
r=60+~40_1
r=60+(40*-1-1)+1
r=60+(-39)-1
r=60-39-1
r=20
*/