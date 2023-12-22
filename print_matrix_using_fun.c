// Wap to reAD m*n elements into an array print it on screen using function.

#include<stdio.h>
// function to read 2D array's element
void read(int a[100][100], int m, int n)
{
    int i, j;
    printf("Enter %d element of array = ",m*n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
}
// function to display the 2d array
void display(int a[100][100], int m, int n)
{
    int i,j;
    printf("Array is = \n");
    for ( i = 0; i < m; i++){
        for(j=0; j<n; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }    
}
void main()
{
    int a[100][100], m,n;
    printf("Enter size of array = ");
    scanf("%d%d", &m, &n);
    read(a,m,n);
    display(a,m,n);

}

