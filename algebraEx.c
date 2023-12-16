/* WAP to print all two digit number.where the second digit is smaller than the first digit by 4,
 and if the number was divided digit's sum, the quotient would be 7.
*/

#include<stdio.h>
void main()
{
    int fd, ld, diff, sum, no;
    for(no=10; no<=99; no++){
        ld = no%10;
        fd = no/10;
        diff  = fd - ld;
        sum = fd + ld;
        if(diff == 4 && no/sum == 7)
            printf("%3d",no);
    }

}

