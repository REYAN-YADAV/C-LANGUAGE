// WAP to read a string print whether it is palindrome or not?

#include<stdio.h>
void main()
{
    char str[100], rstr[100];
    int i, j, len, flag =0;

    // to read str\ing
    printf("Enter a string = ");
    scanf("%s", &str);

    // to calculate length
    for(len=0; str[len] !='\0'; len++)
    //printf("length = %s",str);
    // to find reverse
    for(i=0, j=len-1; i<len; i++,j--){
        rstr[i] = str[j];
    }
    rstr[len] = '\0';
    // to check palindrome
    for(i=0; str[i] != '\0'; i++){
        if(rstr[i] == str[i])
            flag=1;
    }
    if(flag == 1)
        printf("It is palindrome");
    else
        printf("It is not palindrome");
}
