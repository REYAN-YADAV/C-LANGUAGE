// WAP TO read a string and convert it into title case
#include<stdio.h>
// function to reAD string
void read(char str[100])
{
    printf("Enter a string = ");
    gets(str);
}
// function to convert into title case
void title(char str[100])
{
    int i;
    if(str[0] >= 'a' && str[0] <= 'z')
        str[0]  = str[0] -32;
    for(i=1; str[i] != '\0'; i++){
        if(str[i-1] == ' '){
            if(str[i] >= 'a' && str[i] <= 'z'){
               str[i]  = str[i] -32;
            }
        }
    }
}
void display(char str[100])
{
    printf("Enter string = %s",str);
}
void main()
{
    char str[100];
    read(str);
    title(str);
    display(str);
}