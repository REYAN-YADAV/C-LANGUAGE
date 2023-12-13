//WAP to read month no print the season?
// WAP TO READ A CHARATER.PRINT WHETHER IT IS VOWEL OR CONSONENT ?
/*
        11,12,1,2 = winter
        3,4,5,6 = summer
        7,8,9,10 = rainy

*/
#include<stdio.h>
void main ()
{
    int month;
    printf("Enter a month number = ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 2:
        case 11:
        case 12: printf("winter"); break;
        case 3:
        case 4:
        case 5:
        case 6: printf("Summer"); break;
        case 7:
        case 8:
        case 9:
        case 10: printf("rainy"); break;
        default: printf("invalid"); 
    }
}