// WAP to print Hourglass patern * symbol
/*






*/

#include<stdio.h>
void main()
{
    int i, j, space=0;
    for(i=4; i>=1; i--){
        for(j=1; j<=space; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            if(i==4 || j==1 || j==2*i-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        space++;
    }
    space =2;
    for(i=2; i<=4; i++){
        for(j=1; j<=space; j++){
            printf("  ");
        }
        for(j=1;j<=2*i-1; j++){
          if(i==4 || j==1 || j==2*i-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        space--;
    }
}