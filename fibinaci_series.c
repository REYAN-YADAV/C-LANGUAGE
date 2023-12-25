// wap to print fibinachi series using recursion function
#include<stdio.h>
int fib(int n)
{
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
void main()
{
    int n;
    for(n=1; n<15; n++)
        printf("%5d",fib(n));

}