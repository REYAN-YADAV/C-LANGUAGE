// WAP to read 3 angle of triangle find whether it is right angle triangle or not?
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a angle of triangle a,b,c = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==90 || b==90 || c==90)
        printf("it is right angle triangle");
    else
          printf("it is not right angle triangle");
}