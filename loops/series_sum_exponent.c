#include <stdio.h>
#include <math.h>
int main(){
    int i, N, sum=0;

    printf("Enter a number: ");
    scanf ("%d", &N);
    
    for(i=1; i<=N; i++){
    	sum=sum+pow(i,i);
    	printf("%d^%d + ", i,i);
	}
	printf("\b\b=%d", sum);
}
