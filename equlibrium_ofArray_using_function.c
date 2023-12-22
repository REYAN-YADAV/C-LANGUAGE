// wap to find equlibirium of an array using function.

#include<stdio.h>
// to read array
void read(int a[100], int n)
{
    int i;
    printf("Enter the %d elements = ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
}
// function to find wqulibrium element
void equlibirium(int a[100], int n)
{
    int i, j, flag =0,element, sum1 =0, sum2 =0;
    for(i=0; i<n; i++){
        sum1 = 0;
        sum2 = 0;
       for(j=0; j<i; j++)
            sum1 = sum1 + a[j];
       for(j=i+1; j<n; j++)
            sum2 = sum2 + a[j];
       if(sum1 == sum2){
            flag = 1;
            element = a[i];
        }
       
    }
    if(flag = 1)
        printf("equlibrium element  = %d", element);
    else
            printf("There is not equilibrium element");    
}
void main()
{
    int a[100], n;
    printf("Enter the size = ");
    scanf("%d",&n);
    read(a,n);
    equlibirium(a,n);
}
