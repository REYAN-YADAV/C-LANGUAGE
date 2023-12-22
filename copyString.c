// WAP to copy a string into another string using function.
#include<stdio.h>
void read(char str[100])
{
    printf("Enter a string = ");
    scanf("%s",str);

}
void copy(char str[100], char cstr[100])
{
    int i;
    for(i=0; str[i] != '\0'; i++){
        cstr[i] = str[i];
    }
    cstr[i] = '\0';
}
void display(char str[100], char cstr[100])
{
    printf("original string = %s", str);
    printf("\ncopy string = %s", cstr);
}
void main()
{
    char str[100], cstr[100];
    read(str);
    copy(str,cstr);
    display(str,cstr);
}