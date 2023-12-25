// wap to read 2 array and find the sum using pointer.
#include<stdio.h>
#include<stdlib.h>
int read(int *a,int n)
{
    int i;
    //read
    printf("\nEnter %d element  = ");
    for(i=0; i<n; i++)
        scanf("%d",a+i);
}
int sum(int *a, int *b, int *c, int n)
{
    int i;
       // sum
    for(i=0; i<n; i++)
        *(c+i) = *(a+i) + *(b+i);
}
int display(int *c, int n)
{
    int i;
       //print sum
    printf("Sum of array = ");
    for(i=0; i<n; i++)
        printf("%5d",*(c+i));
}

void main()
{
      int *a, *b, *c, n;
    printf("enter size = ");
    scanf("%d", &n);
    // allcoated the memory by dynamically
    a = (int*)malloc(n*sizeof(int));
    b = (int*)malloc(n*sizeof(int));
    c = (int*)malloc(n*sizeof(int));
    read(*a,n);
    read(*b,n);
    sum( *a, *b, *c,n);
    display(*c,n);
}