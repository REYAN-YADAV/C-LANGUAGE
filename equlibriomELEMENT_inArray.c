// WAP to read n elements into an array find the equlibrium elements.

#include<stdio.h>
void main()
{
    int n, i, a[100], sum1, sum2, flag = 0, j, element;
    printf("Enter the size = ");
    scanf("%d",&n);

    printf("Enter the %d elements =",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    for(i=0; i<n; i++)
    {
        sum1 = 0;
        sum2 = 0;
        for(j=0; j<i; j++)
            sum1 = sum1 + a[j];
        for(j=i+1; j<n; j++)
            sum2 = sum2 + a[j];
        if(sum1 == sum2){
            //break;
            flag =1;
            element = a[i];
        }
    }
    if(flag == 1)
        printf("equlibrium element %d",element);
    else
        printf("there is not equlibrium element");

}