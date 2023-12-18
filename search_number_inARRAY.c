// WAP to read n elements into an array a search number, print whether the search no in array or not.

#include<stdio.h>
void main()
{
    int a[10], i, n, snum, flag=0;
    printf("Enter size number = ");
    scanf("%d",&n);

    printf("Enter %d elements = ",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);

    printf("Enter search number = ");
    scanf("%d", &snum);
    
    for(i=0; i<n; i++)
    {
        if(a[i] == snum)
            flag = 1;
    }
    if(flag == 1)
        printf("yes it is");
    else
        printf("no it is not");
}
    







