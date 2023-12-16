/*  In a farm there are some goats and hens. There are 60 eyes and 86 foot in total. 
write a program to find number of goats and hen in the farm?

*/

#include<stdio.h>
void main()
{
    int g, h;  // g = goat , h = hens
    for(g=1, h=29; g<=30; g++,h--){
        if(g*4 + h*2 == 86)
            break;
    }
    printf("goat = %d",g);
    printf("\nhens = %d",h);
}