// WAP to read month no.print the month?
#include<stdio.h>
void main()
{
    int num;
    printf("Enter month number = ");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("jan"); break;
        case 2: printf("feb"); break;
        case 3: printf("march"); break;
        case 4: printf("april"); break;
        case 5: printf("may"); break;
        case 6: printf("june"); break;
        case 7: printf("july"); break;
        case 8: printf("august"); break;
        case 9: printf("sep"); break;
        case 10: printf("october"); break;
        case 11: printf("november"); break;
        case 12: printf("december"); break;
        default: printf("not a digit");
    }
}