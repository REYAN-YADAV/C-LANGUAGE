//WAP to print full hollow pyramid pattern with * symbol.

#include<stdio.h>
void main()
{
    int i, j, space=4;
    for(i=1; i<=5; i++){
        for(j=1; j<=space; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            if(i==3 && j==2 || i==4 && j==2 || j==3 && i==4)
                printf("  ");
            else

                printf("* ");
        }
        printf("\n");
        space--;
   }
}