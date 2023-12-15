// WAP to print right half hollow pyramid with * symobl.

#include<stdio.h>
void main(){
    int i, j;
    // where i represent rows and j represent colloumn.
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            if(j==1 || j==i || i==5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}