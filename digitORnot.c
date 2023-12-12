// WAP to read digit print whethe it is digit or not?
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character = ");
    scanf(" %c",&ch);
    if(ch>='0'&& ch<='9')
        printf("digit");
    else
        printf("not digit");
    
}
