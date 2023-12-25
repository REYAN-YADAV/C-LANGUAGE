// wap to read n single digit elements into array spell all the number using pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, n,i;
    printf("enter size = ");
    scanf("%d", &n);
    // allcoated the memory by dynamically
    a = (int*)malloc(n*sizeof(int));
    // read element of array
    printf("Enter %d single digit element = ");
    for(i=0; i<n; i++)
        scanf("%d",a+i);
    for(i=0; i<n; i++){
        switch (*(a+i))
        {
        case 0: printf("\nZero"); break;
        case 1: printf("\none"); break;
        case 2: printf("\ntwo"); break;
        case 3: printf("\nthree"); break;
        case 4: printf("\nfour"); break;
        case 5: printf("\nfive"); break;
        case 6: printf("\nsix"); break;
        case 7: printf("\nseven"); break;
        case 8: printf("\neight"); break;
        case 9: printf("\nnine"); break;
        default:
            break;
        }
    }
    return 0;
    
}