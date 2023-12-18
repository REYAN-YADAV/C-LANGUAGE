// WAP to read to n elements into 2 arrays.find the addition of these 2 array.

#include<stdio.h>
void main()
{
    int a[10], b[10], i, n, c[10];
    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter %d element of A = ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter %d element of B = ",n);
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);

    for(i=0; i<n; i++)
        c[i] = a[i] + b[i];
    
    printf("sum of array = ");
    for(i=0; i<n; i++)
        printf("%3d",c[i]);

    
}