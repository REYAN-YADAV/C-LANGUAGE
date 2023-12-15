// WAP to  print legt half pyramid pattern with * symbol?

#include <stdio.h> 
  
void main() 
{ 
    int i, j; 
  
    // first loop for printing all rows 
    for (int i = 1; i <= 5; i++) { 
  
        // first inner loop for printing white spaces 
        for (int j = 1; j <= 2*(5-i); j++) { 
            printf(" "); 
        } 
  
        // second inner loop for printing *
        for (int k = 1; k <= i; k++) { 
            printf("* "); 
        } 
        printf("\n");   
    }
}