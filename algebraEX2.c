/* Rita has money pouch. the pouch has equal number of 25 paise coins, 50 paise coins and one rupee coins. 
the total sum is 700.write c program to find how many of each are there?
*/

#include<stdio.h>
void main(){
    int n;  // number of each type coins
    for(n=1; n<=700; n++){
        if(n*0.25 + n*.50 + n*1 == 700)
            break;
        
    }
    printf("25 paisa coins = %d",n);
    printf("\n50 paisa coins = %d",n);
    printf("\none rupee coins = %d",n);

}
