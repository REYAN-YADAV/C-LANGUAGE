// wap to copy a file into another file.
#include<stdio.h>
void main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("sample.txt","r");
    fp2 = fopen("reyan.txt","w");
    if(fp1 == NULL){
        printf("Error file");
        exit(0);   
    }
    if(fp2 == NULL){
        printf("Error file");
        exit(0);   
    }
    while(!feof(fp1))
    {
        char ch;
        fscanf(fp1,"%c",&ch);
        fprintf(fp2,"%c",ch);
    }
    printf("file copied");
    fclose(fp1);
    fclose(fp2);
}