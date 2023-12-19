// WAP to read mxn element in the first array and pxq in second array find multiplication

#include<stdio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p, q;
   // For find size of matrix
    printf("Enter size of matrix A =  ");
    scanf("%d%d",&m, &n);
    printf("Enter size of matrix B =  ");
    scanf("%d%d",&p, &q);
    
    if(n == p)
    {

        // this loop for reading array element of A
        printf("Enter the %d element of 2d array A = ",m*n);
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);

        // this loop for reading array element of B
        printf("Enter the %d element of 2d array b = ",p*q);
        for(i=0; i<p; i++)
            for(j=0; j<q; j++)
                scanf("%d",&b[i][j]);

       // initilize the result matrix with zero
       for(i=0; i<m; i++)
        for(j=0; j<q; j++)
            c[i][j] = 0;
        
        //perform matrix multiplication
        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                for(k=0; k<n; k++){
                    c[i][j] = a[i][k]*b[k][j] + c[i][j];
                }
            }
        }
        // printt result
        printf("Result \n");
        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                printf("%3d",c[i][j]);
            }
            printf("\n");
        }
        

    }
    else
        printf("multiplication is not possible");
}