// WAP to print character pattern .
/*
A B C D E 
A B C D
A B C
A B
A



*/

#include<stdio.h>
void main()
{
    int i, j;

    for(i=5; i>=1; i--){
        char ch = 'A';
        for(j=1; j<=i; j++){
            printf("%c ",ch);
            ch++;
            
        }
        printf("\n");
        
    }
}
