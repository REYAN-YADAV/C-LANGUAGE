// WAP TO print whether symetrix matrix.

#include<stdio.h>
int main()
{
    int a[20][20], i, j, n, m, t[20][20], flag = 0;
    // for find the size of row and column
    printf("Enter the size of 2d array = ");
    scanf("%d%d",&m, &n);
    // for read element
    printf("Enter the %d element of array = ",m*n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);       
    }
    // to verify symetric
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            if(a[i][j] == a[j][i])
                flag = 1;
    }
    if(flag == 1)
        printf("It is symmetric");
    else
        printf("It is not symmetic");
}