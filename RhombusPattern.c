//WAP to print rhombus pattern with * symobl.

#include<stdio.h>
void main()
{
    int i, j, space = 0;
    for(i=1; i<=5; i++){
        // this loop is for printing space
        for(j=1; j<=space; j++){
            printf(" ");
        }
        for(j=1; j<=5; j++){
            printf("* ");
        }
        printf("\n");
        space++;
    
    }

}
