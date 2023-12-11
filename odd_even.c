/*//WAP to read a number whether it is odd or even?
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is even number",a);
    else
        printf("%d is odd number",a);

}
*/
// method 2 = without using % 

#include<stdio.h>
void main()
{
    int num;
    printf("enter a number = ");
    scanf("%d",&num);
    if(num/2*2==num)
        printf("%d is even",num);
    else
        printf("%d is odd",num);
}





