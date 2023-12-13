// WAP to read 2 number,1 operator. find the result based on operator.
#include<stdio.h>
void main ()
{
    int a,b;
    char op;
    printf("Enter a 2 num and a operator = ");
    scanf("%d%d %c",&a, &b, &op);
    switch(op)
    {
        case '+': printf("sum = %d",a+b); break;
        case '-': printf("sub = %d",a-b); break;
        case '*': printf("multiply = %d",a*b); break;
        case '/': printf("divide = %d",a/b); break;
        case '%': printf("modulus= %d",a%b); break;
        default: printf("invalid operator"); 

    }
}
