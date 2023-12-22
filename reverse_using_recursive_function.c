// WAP to read n elements into an array, print array element in reverse order using recusion function.

#include<stdio.h>
// function to read array element
void read(int a[100], int n)
{
    int i;
    printf("Enter the %d elements =",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
}
void reverse(int a[100], int index)
{
    if(index == -1)  // invalid index
        return;
    else
        printf("%3d",a[index]);
        reverse(a, index-1);
}
void main()
{
    int n, a[100];
    printf("Enter size = ");
    scanf("%d",&n);
    read(a,n);
    reverse(a,n-1);
}