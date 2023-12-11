// WAP to read purchase rate,sales rate.print whether it is pfofit or loss with amount?
#include<stdio.h>
int main()
{

    int buyRate,salesRate,profit,loss;
    printf("Enter the amount of buyRate and salesRate = ");
    scanf("%d%d",&buyRate,&salesRate);
    if(salesRate>buyRate)
        printf("profit=%d",salesRate-buyRate);
    else
        printf("loss=%d",buyRate-salesRate);
    return 0;

}