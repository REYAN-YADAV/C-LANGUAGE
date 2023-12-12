// WAP to read 3 side of triangle and find out whether it is possible to draw or not.?
#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("Enter the side of triangle = ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2) // the sum of 2 side should be greater than the third side to possible to draw a triangle.
        printf("it is triangle");
    else
        printf("it is not trianle");

}