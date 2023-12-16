// WAP to print character pattern .
/*
        A 
      A B
    A B C
  A B C D
A B C D E



*/

#include<stdio.h>
void main()
{
    int i, j, space = 4;
    char ch = 'A';
    for(i=1; i<=5; i++){
        for(j=1; j<=space; j++){
            printf(" ");  
        }
        
        for(j=1; j<=i; j++){
            printf("%c  ",ch);
            
        }

        printf("\n");
        space--;
        ch++;
    }
}
