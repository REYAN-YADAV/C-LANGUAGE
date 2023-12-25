// wap to find nearest palindrome number of a given num using pointer.

#include<stdio.h>
#include<stdlib.h>
//function to calculate palindrome
int palindrome(int no)
{
    int rem, rev = 0;
    int dup = no;
    while(no != 0)
    {
        rem = no % 10;
        rev = rev*10 + rem;
        no = no / 10;   
    }
    if(rev == dup)
        return 1;
    else
        return 0;

}
void nearestPalindrome(int no)
{
    int i = 1;
    while( 1 )
    {
        if(palindrome(no+i) == 1){
            printf("Neraest palindrome = %d",(no+i));
            return;
        }
        if(palindrome(no-i) == 1){
            printf("Neraest palindrome = %d",(no-i));
            return;
        }    
    }
    i++;
}
int main()
{
    int no;
    printf("Enter a no = ");
    scanf("%d",&no);
    nearestPalindrome(no);
    return 0;
}







