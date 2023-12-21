// WAP to read a string and display its length.

#include<stdio.h>
void main()
{
    char str[50];
    int len;
    
    // to read a string
    printf("Enter a string = ");
    scanf("%s",&str);

    // to find its length
    for(len=0; str[len] != '\0'; len++){
        //empty for loop
    }
    printf("length = %d",len);
    
}