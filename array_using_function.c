// WAP to read and print n element into an array.

#include<stdio.h>

// function for to read array    
void read(int a[100], int n)
{
    int i;
    printf("Enter %d element of array = ",n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}
// function to  print array on screen
void display(int a[100], int n)
{
    int i;
    printf("Array is  = ");
    for(i=0; i<n; i++)
        printf("%3d",a[i]);
}
void main()
{
    int a[100], n;
    printf("Enter size = ");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
}


