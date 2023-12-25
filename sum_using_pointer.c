// wap to read n element unto array find sum of element using pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n, i,sum=0;
    printf("enter size = ");
    scanf("%d", &n);
    // allcoated the memory by dynamically
    a = (int*)malloc(n*sizeof(int));
    // read element of array
    printf("Enter %d element = ");
    for(i=0; i<n; i++)
        scanf("%d",a+i);
    // calculate sum
    for(i=0; i<n; i++)
        sum = sum + *(a+i);
    printf("sum = %d",sum);
    //free(a); // free allocated memory
    return 0;
}