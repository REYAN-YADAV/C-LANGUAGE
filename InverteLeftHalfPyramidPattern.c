//WAP to print INVERTED LEFT HALF PYRAMID PATTERN

#include<stdio.h>
void main()
{
    int i, j, space=0;
    for(i=5; i>=1; i--){
        // this loop is for space 
        for(j=1; j<=space; j++){
            printf("  ");
        }
        // this loop is for printing * symbol
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
        space++;
    }

}