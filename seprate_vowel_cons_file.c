// wap to seprate vowel and consonant of a file
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("sample.txt","r");
    fp2 = fopen("vowel.txt","w");
    fp3 = fopen("cons.txt","w");
    if(fp1 == NULL){
        printf("Error file");
        exit(0);   
    }
    if(fp2 == NULL){
        printf("Error file");
        exit(0);
    }   
    if(fp3 == NULL){
        printf("Error file");
        exit(0);
    }
    while(!feof(fp1))
    {
        char ch;
        fscanf(fp1,"%c",&ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            fprintf(fp2,"%c",ch);
        else
            fprintf(fp3,"%c",ch);
    }
    printf("data sepreated");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}