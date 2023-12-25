// wap to read an array element find odd count and even count using pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i,oc=0,ec=0;
     printf("enter size = ");
    scanf("%d", &n);
    // allcoated the memory by dynamically
    a = (int*)malloc(n*sizeof(int));
    // read element of array
    printf("Enter %d element = ");
    for(i=0; i<n; i++)
        scanf("%d",a+i);
    for(i=0; i<n; i++){
        if(*(a+i) % 2 == 0)
            ec++;
        else
            oc++;
    }
    printf("even count = %d",ec);
    printf("\nodd count  = %d",oc);
    return 0;
         
}

