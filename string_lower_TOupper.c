// WAP to read a string and print lower to upper

#include<stdio.h>
void main()
{
    char str[100];
    int i;
    // to read  string
    printf("Enter a string = ");
    scanf("%s", &str);

    // to convert lower to upper
    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] -32;
    }
    printf("string = %s", str);   
}
