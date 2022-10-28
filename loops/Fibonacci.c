#include <stdio.h>
int main(){
    int N, f0=0, f1=1, fib=0;

    printf("Enter a limit to print fibonacci series: ");
    scanf ("%d", &N);
    
    printf("%5d%5d", f0, f1);
    
    do{
    	fib = f0+f1;
    	printf("%5d", fib);
    	f0=f1;
    	f1=fib;
    	N--;
	  }while(N>2);
	
	return 0;
}
