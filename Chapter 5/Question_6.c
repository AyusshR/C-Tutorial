//Sum of First n natural numbers
#include <stdio.h>

int summ(int n);

int sumNumbers(int n) {
    if (n == 1){
        return 1;
    }
    int sum;
    sum = n + (n -1);
    sumNumbers(n-1);
    
    return n + sumNumbers(n - 1);
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    sumNumbers(n);
    summ(n);

    printf("Sum is : %d\n", summ(n));
    printf("Sum is : %d\n", sumNumbers(n));
    return 0;
}

// OR the easier way

int summ(int n) {
    if (n == 1) {
        return 1;
    }
    int sumNm1 = summ(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}