//WAP to read m*n element into an array, print it on screen using function.

#include<stdio.h>
// function to read array's element
void read(int a[100][100], int m, int n)
{
    int i, j;
    printf("Enter the element %d of array = ",m*n);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }
}
// function to calculate sum
void sum(int a[100][100], int b[100][100], int c[100][100], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
}

// function to display the result
void display(int c[100][100], int m, int n)
{
    int i, j;
    printf("Array is  = \n");
     for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            printf("%3d",c[i][j]);
        printf("\n");
    }
    
}
void main()
{
    int a[100][100], b[100][100], c[100][100], m, n;
    printf("Enter the size = ");
    scanf("%d%d",&m, &n);
    read(a,m,n);
    read(b,m,n);
    sum(a,b,c,m,n);
    display(c,m,n);

}