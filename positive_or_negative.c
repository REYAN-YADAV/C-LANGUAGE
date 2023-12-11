/*// WAP to read a number.find the numer is +ve or -ve?
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    if(num<0)
        printf("%d is -ve number",num);
    else
        printf("%d is +ve number",num);
}
*/
// method 2 = without comapring with zero

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    if(num!=abs(num))
        printf("%d is -ve number",num);
    else
        printf("%d is +ve number",num);

}