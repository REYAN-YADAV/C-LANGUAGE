// WAP to read mxn element into an array print the array

#include<stdio.h>
int main()
{
    int a[10][10], i, j, n, m;
    // for find the size of row and column
    printf("Enter the size of 2d array = ");
    scanf("%d%d",&m, &n);
   
    // this loop for reading array element
    printf("Enter the %d element of 2d array = ",m*n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    
    // this loop for printing 2d array
    printf("Array is = \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
       
}