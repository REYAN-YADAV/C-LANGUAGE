//WAP TO READ A LOWER CASE CHARACTER.CONVERT INTO CAPITAL?
// ASCII  VALUE OF a=97....z=122  and  A=65.....Z=90
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character = ");
    scanf(" %c",&ch);
    ch=ch-32;
    printf("letter = %c",ch);
    return 0;

}