// WAP to read a string. print the count number of alphabet, digit, vowel, consonant,space, symbol.
#include<stdio.h>
void main()
{
    char str[100];
    int i, count_alpha = 0, count_vowel = 0, count_cons=0, count_space = 0, count_symbol =0, count_digit = 0;

    // to read string
    printf("Enter a string = ");
    gets(str);

    // calculate the count
    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' ){
            count_alpha++;
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i] == 'I' ||str[i]=='O'||str[i] == 'U')
                count_vowel++;
            else
                count_cons++;      
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            count_digit++;
        }
        else if(str[i] == ' '){
            count_space++;
        }
        else
            count_symbol++;
    }
    printf("count alphabet = %d",count_alpha);
    printf("\ncount vowel  = %d",count_vowel);
    printf("\ncount consonent = %d",count_cons);
    printf("\ncount space = %d",count_space);
    printf("\ncount digit = %d",count_digit);
    printf("\ncount symbol = %d",count_symbol);
}

