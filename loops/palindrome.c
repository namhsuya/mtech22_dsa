#include <stdio.h>
int main(){
    int N, N1, rem=0, reverse=0;
    printf("Enter a number to check if it is palindrome: ");
    scanf ("%d", &N);
    N1=N;
    
	# Loop runs until it reaches the ones digit
	# rem = Stores the remainder for each iteration of division by 10
	# N is updated with division by 10, extracting each digit from right to left
	while(N>0){
    	rem=N%10;
    	reverse = reverse*10 + rem;
    	N=N/10;
	}
	
	# If-else construct compares reversed number with original number
	if(N1==reverse){
		printf("%d == %d | Palindrome", N1, reverse);	
	} else {
		printf("%d =/= %d | Not palindrome", N1, reverse);
	}
	
	return 0;
}
