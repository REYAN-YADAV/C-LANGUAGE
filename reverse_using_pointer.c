// wap to read n element into an array reverse it using pointer.
#include<stdio.h>
#include<stdlib.h>

int  main()
{
    int *a, n,i;
    printf("Enter the size = ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));

    printf("Enter %d element = ",n);
    for(i=0; i<n; i++)
        scanf("%d",a+i); // &a[i] = a+i

    printf("reverse array = ");
    for(i=n-1; i>=0; i--)
        printf("%5d",*(a+i));  // a[i] = *(a+i)
    free(a); // free the allocated memory
    return 0;
}