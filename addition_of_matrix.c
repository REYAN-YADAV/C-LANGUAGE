// WAP to read mxn element into an array print the array

#include<stdio.h>
void main()
{

    int a[10][10], b[10][10], c[10][10];
    int i, j, m, n;
    
    // for find the size of row and column
    printf("Enter the size of 2d array = ");
    scanf("%d%d",&m,&n);
   
    // this loop for reading array element of A
    printf("Enter the %d element of 2d array A = ",m*n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    
    // this loop for reading array element of B
    printf("Enter the %d element of 2d array b = ",m*n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    // loop for addition
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("REsult = \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            printf("%3d",c[i][j]);
    printf("\n");
    }

}
