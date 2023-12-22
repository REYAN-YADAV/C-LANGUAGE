// WAP TO read a string and convert it into toggle case
#include<stdio.h>
// function to reAD string
void read(char str[100])
{
    printf("Enter a string = ");
    gets(str);
}
// function to convert into title case
void toggle(char str[100])
{
    int i;
    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
               str[i]  = str[i] - 32;
            }
        else
            str[i] = str[i] + 32;
    
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
    toggle(str);
    display(str);
}