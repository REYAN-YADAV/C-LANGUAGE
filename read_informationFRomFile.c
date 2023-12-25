// wap to read entire information from file.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp = fopen("sample.txt","r");
    if(fp == NULL){
        printf("error file");
        exit(0);
    }
    while(!feof(fp))
    {   char ch;
        fscanf(fp,"%c",&ch);
        printf("%c",ch);
    }
    fclose(fp);

}