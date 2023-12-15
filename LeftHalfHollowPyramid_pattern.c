// WAP to print left half hollow pyramid pattern?

#include<stdio.h>
void main()
{
    int i, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=2*(5-i); j++){
            printf(" ");
           if(j+i == 7)
            printf("* ");
            
        }    
        for(int k=1; k<=i; k++){
            if(i==5 || k==i)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}