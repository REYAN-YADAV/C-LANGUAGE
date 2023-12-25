// wap to merge 2 file?
#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("sample.txt","r");
    fp2 = fopen("reyan.txt","r");
    fp3 = fopen("merge.txt","w");
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
        fprintf(fp3,"%c",ch);
    }
      while(!feof(fp2))
    {
        char ch;
        fscanf(fp2,"%c",&ch);
        fprintf(fp3,"%c",ch);

    }
    printf("file merged");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}