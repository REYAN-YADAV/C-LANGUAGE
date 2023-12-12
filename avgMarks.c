//WAP to read avg marks of students.print the grades?
#include<stdio.h>
void main()
{
    int avg;
    printf("Enter the avg = ");
    scanf("%d",&avg);
    if(avg>=60)
        printf("Ist grade");
    else if(avg>=50)
        printf("IInd grade");
    else
        printf("IIIrd grade");
}