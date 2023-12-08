// WAP TO READ 3 NO AND FIND WHICH ONE IS BIG BTW THOSE THEREE?
#include<stdio.h>
void main()
{
    int a,b,c,big;
    printf("Enter 3 no =");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b?a:b)>c?(a>b?a:b):c;  //using ternary operator = condition?if value is true:if value is false;
    printf("greater no = %d",big);


}
