//WAP TO READ 4 NUMBER AND FIND BIG NO ON THOSE 4 NUMBER?
#include<stdio.h>
void main()
{
    int a,b,c,d,big;
    printf("Enter 4 intiger number = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    big=(a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d); //ternary operator=  condition?if true:if false
    printf("the biggest number is %d",big);

}
