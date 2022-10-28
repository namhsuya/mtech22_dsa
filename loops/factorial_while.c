#include <stdio.h>
int main(){
    int i, N, fact=1;

    printf("Enter a number to compute its factorial: ");
    scanf ("%d", &N);
    
    printf("\nFactorial of %d is ", N);
    
    while(N>0){
    	fact=fact*N;
    	N--;
	}
	printf("%d", fact);
  
  return 0;
}
