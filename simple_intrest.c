// WAP TO READ P,r,T VALUES AND FIND THE SIMPLE INTREST?
#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("Enter the value of p,r,t =");
    scanf("%d%d%d",&p,&r,&t);
    si=p*r*t/100;
    printf("simple intrest = %.2f",si);
    return 0;
}
