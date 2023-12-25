//wap to create an array of struct?

#include<stdio.h>
struct book
{
    char bname[50];
    int rate;
};
void main()
{
    struct book b[3];
    int i;
    for(i=0; i<3; i++){
        printf("Enter book name and rate = ");
        scanf("%s%d",&b[i].bname, &b[i].rate);
    }
    for(i=0; i<3; i++){
        printf("\n book name = %s",b[i].bname);
        printf("\nbook rate = %d",b[i].rate);
    }

}