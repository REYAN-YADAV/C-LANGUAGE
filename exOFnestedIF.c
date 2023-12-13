//wap to read age gender og person.print wheter the person is major or minor.
/*
        gender                  age                 message
        M                       >=21                MAJOR
                                else                minor
                                >=18                major
                                else                minor
        F
*/
#include<stdio.h>
void main()
{
    int age;
    char gender;
    printf("Enter the age and gender of person (M/F) = ");
    scanf(" %c%d",&gender, &age);
    if(gender == 'M')
    {
        if(age >= 21)
            printf("Hhe is major");
        else
            printf("He is minor");
    }
    else
    {
        if(age >= 18)
            printf("she is major");
        else
            printf("she is minor");
    }

}