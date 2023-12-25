// wap to reaf n element into an array find max and min element of array using pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int *a, n,i,max, min;
    printf("enter size = ");
    scanf("%d", &n);
    // allcoated the memory by dynamically
    a = (int*)malloc(n*sizeof(int));
    // read element of array
    printf("Enter %d single digit element = ");
    for(i=0; i<n; i++)
        scanf("%d",a+i);
    max = min = *(a+0);
    for(i=0; i<n; i++){
        if(*(a+i) > max)
            max = *(a+i);
        if(*(a+i) < min)
            min = *(a+i);
    }
    printf("max element = %d",max);
    printf("\nmin element  = %d",min);
    return 0;    
}