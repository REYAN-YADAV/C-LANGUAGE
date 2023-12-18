// WAP to read n elements and find max and min elements.

#include<stdio.h>
void main()
{
    int a[20], i, n, max, min;
    printf("Enter the size of array  = ");
    scanf("%d",&n);

    printf("Enter the %d element of array = ", n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);

    max = a[0];
    min = a[0];
   
    for(i=0; i<n; i++){
        if(a[i] > max)
            max  = a[i];
        if(a[i] < min)
            min = a[i];
    }
     printf("max= %d",max);
    printf("\nmin = %d",min);    
    
}