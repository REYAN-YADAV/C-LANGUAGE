//WAP to read a number and find print first and last digit of given number.

#include<stdio.h>
int main(){
    int fd, ld, num;
    printf("Enter a number = ");
    scanf("%d",&num);
    ld = num % 10;  // ld  = last digit
    while(num != 0)
    {
        fd = num % 10;  // first digit
        num = num / 10;
    }
    printf("first digit = %d",fd);
    printf("\nlast digit = %d ",ld);
    return 0;
}