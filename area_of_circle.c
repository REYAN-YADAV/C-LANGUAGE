// WAP TO FIND AREA OF CIRCLE?
#include<stdio.h>
int main(){
    int radius;
    float area;
    const float pi=3.14;
    printf("enter value of radius = ");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("Area of circle is %.2f",area);
    return 0;

}