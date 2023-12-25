// wap to read a number find odd or even without using operator and using function and loop

#include<stdio.h>
void odd_even(int no)
{
    while(no > 1){
        no = no -2;
    }
    if(no == 1)
        printf("odd");
    else
        printf("even");
}
void main()
{
    int no;
    printf("Enter a number = ");
    scanf("%d", &no);
    odd_even(no);
}