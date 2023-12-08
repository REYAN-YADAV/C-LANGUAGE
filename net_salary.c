// WAP TO READ BASIC,HRA,DA,PF AND FIND NET SALARY?
#include<stdio.h>
int main(){
    int basic,hra,da,pf,net;
    printf("Enter the value of basic,hra,da,pf = ");
    scanf("%d%d%d%d",&basic,&hra,&da,pf);
    net=basic+hra+da-pf;
    printf("Net Salary is %d",net);
    return 0;

}