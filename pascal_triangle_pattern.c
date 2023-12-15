// C program to print the pascal's triangle pattern 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 

	// outer loop for rows 
	for (int i = 1; i <= rows; i++) { 

		// inner loop 1 for leading white spaces 
		for (int j = 0; j < rows - i; j++) { 
			printf(" "); 
		} 

		int C = 1; // coefficient 

		// inner loop 2 for printing numbers 
		for (int j = 1; j <= i; j++) { 
			printf("%d ", C); 
			C = C * (i - j) / j; 
		} 
		printf("\n"); 
	} 
	return 0; 
}
