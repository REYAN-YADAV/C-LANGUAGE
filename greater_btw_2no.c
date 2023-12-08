#include<stdio.h>
int main(){
    int a,b,greater;
    printf("Enter value of a and b = ");
    scanf("%d%d",&a,&b);
    greater=a>b?a:b;
    printf("The greater no btw a and b = %d",greater);
    return 0;

}