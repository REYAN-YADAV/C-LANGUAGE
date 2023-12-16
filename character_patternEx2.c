// WAP to print character pattern given below.
/*
E E E E E 
D D D D
C C C
B B
A

*/

#include<stdio.h>
void main()
{
    int i, j;
    char ch ='E';
    for(i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%c ",ch);

        }
        printf("\n");
        ch--;
    }
}
