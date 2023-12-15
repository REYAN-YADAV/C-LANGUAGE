//WAP to print diamond pattern with * symbol.
/*

      * 
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *

*/

#include<stdio.h>
void main()
{
    int i, j, space =3;
    for(i=1; i<=4; i++){
        for(j=1; j<=space; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
        space--;
    }
    space =1;
    for(i=3; i>=1; i--){
        for(j=1; j<=space; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
        space++;
    }
}