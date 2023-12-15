//WAP to print right half pyramid and its inverted.
/*

*        
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>
void main()
{
    int i, j;
    // loop for right half rows
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    // loop for inverted half rows
    for(i=4; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}