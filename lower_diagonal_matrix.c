// WAP TO print lower diagonal matrix.

#include<stdio.h>
int main()
{
    int a[20][20], i, j, n, m;
    // for find the size of row and column
    printf("Enter the size of 2d array = ");
    scanf("%d%d",&m, &n);
    
    if(m == n)
    {
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(i >= j)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
    
        } 
        printf("lower diagonal matrix = \n");
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                printf("%3d",a[i][j]);
            }
            printf("\n");
        }       
       
    }
    else
        printf("for lower diagonal matrix row colunm should be same size");
    
    return 0;
       
}