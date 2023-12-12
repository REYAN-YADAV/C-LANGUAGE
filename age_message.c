// WAP to read age of a person print a message based on table?
/*
        age                    message 
        <3                      infant
        <16                     kid
        <21                     teenager
        <28                     youngster
        <40                     middle age
        else                    old age

*/
#include<stdio.h>
void main()
{
    int age;
   // char message;
    printf("Enter the age of the person = ");
    scanf("%d",&age);

    if(age<3)
        printf("infant");
    else if(age<16)
        printf("kid");
    else if(age<21)
        printf("Teenager");
    else if(age<28)
        printf("younster");
    else if(age<40)
        printf("middle age");
    else
         printf("old age");
}