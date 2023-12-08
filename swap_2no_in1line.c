// WAP TO READ 2 NO SWAP THE NUMBER IN SINGLE LINE OF CODE?
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a and b = ");
    scanf("%d%d",&a,&b);
    a=(a+b)-(b=a);
    printf("a=%d",a);
    printf("\nb=%d",b);
    return 0;
}
//explaination
/*
a=(a+b)-(b=a);
suppose a=20 and b=40
a=(20+40)-(b=20)
a=(60)-(b=20)
a=40
b=20
*/