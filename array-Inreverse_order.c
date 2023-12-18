// WAP to read n elements into an array print the array in reverse order?

#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("Enter aray size = ");
    scanf("%d",&n);

    printf("Enter array %d elements = ",n);
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("Reverse array is = ");
    for(i=n-1; i>=0; i--)
    printf("%3d",a[i]);


}