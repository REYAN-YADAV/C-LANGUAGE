#include<stdio.h>

int main() {
    int a[10][10], i, j, n, m, flag = 1;

    // Find the size of the row and column
    printf("Enter the size of 2D array: ");
    scanf("%d %d", &m, &n);

    // Read array elements
    printf("Enter the %d elements of 2D array: ", m * n);
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Check if the array is an identity matrix
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) {
                flag = 0;
                break;  // Exit the loop if the condition is not met
            }
        }
        if(flag == 0)
            break;  // Exit the outer loop if the condition is not met
    }

    if(flag == 1)
        printf("The matrix is an identity matrix.\n");
    else
        printf("The matrix is not an identity matrix.\n");

    return 0;
}
