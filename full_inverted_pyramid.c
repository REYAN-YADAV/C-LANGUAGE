//WAP to print full pyramid pattern with * symbol.

#include<stdio.h>
void main()
{
    int i, j, space=0;
    for(i=5; i>=1; i--){
        for(j=1; j<=space; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
        space++;
   }
}