// WAP TO find sum of 2 number using function.

#include<stdio.h>
// function to read array
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
void sum(int a[100],int b[100], int c[100], int n)
{
    int i;
    for(i=0; i<n; i++)
    c[i] = b[i] + a[i];
}
void main()
{
    int a[100], b[100], c[100], n;
    printf("Enter size = ");
    scanf("%d",&n);
    read(a,n);
    read(b,n);
    sum(a,b,c,n);
    display(c,n);
}