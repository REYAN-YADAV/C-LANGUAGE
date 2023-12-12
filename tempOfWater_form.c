//WAP to read tempreture of water.print its form.
#include<stdio.h>
void main()
{
    int temp;
    printf("Enter temp = ");
    scanf("%d",&temp);
    if(temp>=100)
        printf("steam");
    else if(temp<=0)
        printf("ice");
    else
        printf("water");
}