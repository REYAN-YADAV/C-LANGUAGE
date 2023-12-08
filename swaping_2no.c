// WAP TO READ 2 NUMBER AND SWAP THEM?

#include<stdio.h>
int main(){
    int a,b;
    printf("enter 2 no = ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d",a);
    printf("\nb=%d",b);
    return 0;
}

// method 2
#include<stdio.h>
void main(){
    int a,b,t;
    printf("Enter 2 no = ");
    scanf("%d%d",&a,&b);
    t=a;
    b=t;
    a=b;
    printf("a=%d",a);
    printf("b=%d",b);

}


