// wap to read book name and rate using structure and print it.
#include<stdio.h>
struct book
{
    char bname[50];
    int rate;
};
void main()
{
    struct book b;
    printf("Enter book name and rate = ");
    scanf("%s%d",&b.bname, &b.rate);
    printf("\n book name = %s",b.bname);
    printf("\n bookrate = %d",b.rate);   
}