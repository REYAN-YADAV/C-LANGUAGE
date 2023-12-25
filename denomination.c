// wap to read a amount print the denomination for the amount.
#include<stdio.h>
void denomination(int amount)
{
    if(amount >= 2000){
        printf("\n2000 * %d", amount/2000);
        amount = amount % 2000;
    }
     if(amount >= 500){
        printf("\n500 * %d", amount/500);
        amount = amount % 500;
    }
     if(amount >= 200){
        printf("\n200 * %d", amount/200);
        amount = amount % 200;
    }
     if(amount >= 100){
        printf("\n100 * %d", amount/100);
        amount = amount % 100;
    }
     if(amount >= 50){
        printf("\n50 * %d", amount/50);
        amount = amount % 50;
    }
     if(amount >= 20){
        printf("\n20 * %d", amount/20);
        amount = amount % 20;
    }
     if(amount >= 10){
        printf("\n10 * %d", amount/10);
        amount = amount % 10;
    }
     if(amount >= 5){
        printf("\n5 * %d", amount/5);
        amount = amount % 5;
    }
     if(amount >= 2){
        printf("\n2 * %d", amount/2);
        amount = amount % 2;
    }
     if(amount >= 1){
        printf("\n1* %d", amount / 1);
        amount = amount % 1;
    }
}
void main()
{
    int amount;
    printf("Enter the amount = ");
    scanf("%d",&amount);
    denomination(amount);
}


