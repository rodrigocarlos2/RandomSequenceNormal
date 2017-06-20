

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
 
//This is a sample program to generate a random numbers based on probability desity function of spiner
//pdf(x) = 1 if x>360
//       = 0 if x<0
//       = x/360 otherwise

int N = 5;

int main(int argc, char **argv){
    
	int p = 0, i;
    
	for (i = 0; i < N; i++) {
		
        p = rand() % 600;
        
        if (p > 660){
            printf("%d ", 0);
		}
        else if (p < 0)
            printf("%d ", 0);
        else
            printf("%f ", p * 0.1 / 660);
 
    }
    
	return 0;
	
}
