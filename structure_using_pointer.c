//wap to create structure using pointer.
#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rno;
    char sname[100], cname[100];
}s;
typedef struct student student;
void main()
{
    student *s;
    s=(student*)malloc(sizeof(student));
    printf("Enter rno, sname, cname = ");
    scanf("%d %s %s",&s->rno, &s->sname, &s->cname);
    printf("rno = %d", s->rno);
    printf("\nsname = %s", s->sname);
    printf("\ncname = %s", s->cname);

    
}