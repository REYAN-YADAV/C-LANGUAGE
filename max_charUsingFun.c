// wap to read a string and find max character.
#include<stdio.h>
void read(char str[100])
{
    printf("Enter a string = ");
    scanf("%s",str);

}
void find_max(char str[100])
{
    int i, max = str[0];
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] > max)
            max = str[i];
    }
    printf("max char = %c",max);
}
void main()
{
    char str[100];
    read(str);
    find_max(str);

}