// wap to read rno, sname, cname from file.

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int rno;
    char sname[100], cname[100];
    fp = fopen("sample.txt","r");
    if(fp == NULL){
        printf("file error");
        exit(0);
    }
    fscanf(fp,"%d%s%s",&rno, &sname,&cname);
    printf("rno = %d",rno);
    printf("\nsname = %s",sname);
    printf("\ncname = %s",cname);
    fclose(fp);

}