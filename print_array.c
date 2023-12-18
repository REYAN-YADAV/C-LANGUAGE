// WAP to n elements into an array and print into screeen?

#include<stdio.h>
void main()
{
    int a[10], i, n; // a= array's name, n = no of elements
    printf("Enter size of array = ");
    scanf("%d", &n);
    
    // to read the array element
    printf("Enter %d elements = ",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    
    // to print the array
    printf("Array is = ");
    for(i=0; i<n; i++)
    printf("%3d",a[i]);
  
}