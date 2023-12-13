/*// wap to prnt folllowing series?
//  1   4   9   16   25   36   49   64   81   100
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%3d ",i*i);
        i++;
    }
    return 0;

}
*/
// Wap to print following series?
// 1   5   2   4   3   3   4   2   5   1
#include<stdio.h>
int main()
{
    int i=1, j=5;
    while(i<=5)
    {
        printf("%3d%3d",i,j);
        i++;
        j--;

    }

}
