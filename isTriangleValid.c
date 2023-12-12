// WAP to read 3 angle of triangle find whether it is  angle is valid or not?
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a angle of triangle a,b,c = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
        printf("valid");
    else
          printf("not valid");
}