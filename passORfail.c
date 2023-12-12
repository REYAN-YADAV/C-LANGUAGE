// WAP to read marks of 3 subject find wherter students pass or fail?
#include<stdio.h>
void main()
{
    int m1,m2,m3;
    printf("Enter the marks m1,m2,m3 = ");
    scanf("%d%d%d",&m1,&m2,&m3);
    if(m1>=35 && m2>=35 && m3>=35)
        printf("The student is pass");
    else
    
        printf("The student is fail");


}
