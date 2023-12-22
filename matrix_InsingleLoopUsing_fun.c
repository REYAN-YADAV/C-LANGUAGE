// WAP to read m*n element print the array using fun and using single for loop.

#include<stdio.h>
//function to read element
void read(int a[100][100], int m, int n)
{
    int i, row, col;
    printf("Enter the %d element  = ",m*n);
    for(i=0; i<m*n; i++){
        row  = i/n;
        col  = i%n;
        scanf("%d",&a[row][col]);
    }

}
// function to display array
void display(int a[100][100], int m, int n)
{
    int i, col, row;
    printf("Array is = \n");
    for(i = 0; i<m*n; i++){
        row = i/n;
        col = i%n;
        if(col == 0)
            printf("\n");
        printf("%3d",a[row][col]);
    }

}
void main()
{
    int a[100][100],m,n;
    printf("Enter size of array = ");
    scanf("%d%d",&m,&n);
    read(a,m,n);
    display(a,m,n);

}