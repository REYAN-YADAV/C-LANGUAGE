// wap to print rno, sname, cnAME in file.

#include<stdio.h>
void main()
{
    FILE *fp;
    int rno;
    char sname[100], cname[100];
    fp = fopen("sample.txt","w");
    if(fp == NULL){
        printf("file error");
        exit(0);
    }
    printf("Enter rno,sname, cname = ");
    scanf("%d%s%s",&rno, &sname,&cname);
    fprintf(fp,"%d\t%s\t%s\t",rno,sname,cname);
    printf("data written in file");
    fclose(fp);       
}