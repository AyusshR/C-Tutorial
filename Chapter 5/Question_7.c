//Factorial of n
#include <stdio.h>

int factoriall(int n) {
    if (n == 1){
        return 1;
    }
    int factorial;
    factorial = n * (n -1);
    factoriall(n-1);
    
    return n * factoriall(n - 1);
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    factoriall(n);

    printf("Factorial is : %d\n", factoriall(n));
    return 0;
}