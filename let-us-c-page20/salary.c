#include <stdio.h>
int main(){
    float basic, gross;

    printf("Enter basic salary=");
    scanf ("%f", &basic);
    gross = basic + (basic * 0.4) + (basic * 0.2);
    printf("\nGross salary= %.2f", gross);
    printf("\n\n\n\n");
}