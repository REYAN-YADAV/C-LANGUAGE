// WAP to read char, print whether it is upper case?
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character = ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("%c is lower case",ch);
    else
        printf("%c is upper case",ch);    

}
