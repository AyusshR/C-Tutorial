//Print factorial of a number n
#include <stdio.h>

int main(void){
    int n,factorial = 1;
    printf("Enter number : ");
    scanf("%d", &n);

    for ( int i = 1; i <= n ; i++){
        factorial = factorial * i;
    }
    printf("Factorial of n is : %d\n", factorial);

    return 0;
}