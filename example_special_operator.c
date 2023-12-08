// sizeof
/*
#include<stdio.h>
int  main(){
    printf("The size of char is %c",sizeof(char));
    printf("\nThe size of int is %d",sizeof(int));
    printf("\nThe size of float is %f",sizeof(float));
    printf("\nThe size of double is %lf",sizeof(double));
    return 0;
}
*/

// comma = it evaluate the all the expression and give the result of right most expression.
#include<stdio.h>
int main(){
    int a;
    a=(20,45,68);       
    printf("a=%d",a);
    return 0;

}