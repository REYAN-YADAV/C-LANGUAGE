// WAP TO print transpose matrix.

#include<stdio.h>
int main()
{
    int a[20][20], i, j, n, m, t[20][20];
    // for find the size of row and column
    printf("Enter the size of 2d array = ");
    scanf("%d%d",&m, &n);

    printf("Enter the %d element of array = ",m*n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);       
    }

    // for transpose matrix
      for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            t[j][i] = a[i][j];      
    }

    printf("Transpose matrix = \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%3d",t[i][j]);  
        printf("\n");      
    }

}