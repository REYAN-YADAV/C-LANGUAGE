// wap to read n element into an arrar.find the squares using pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int *a, n,i;
    printf("enter size = ");
    scanf("%d", &n);
    // allcoated the memory by dynamically
    a = (int*)malloc(n*sizeof(int));
    // read element of array
    printf("Enter %d single digit element = ");
    for(i=0; i<n; i++)
        scanf("%d",a+i);
    for(i=0; i<n; i++)
        *(a+i) = *(a+i) * *(a+i);

    printf("square for given array = ");
    for(i=0; i<n; i++)
        printf("%5d",*(a+i));

    return 0;
}
