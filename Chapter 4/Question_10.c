//Print the sum of all numbers between 5 and 50 including 5 and 50
#include <stdio.h>
int sum = 0;

int main(){
    for ( int i = 5; i <= 50 ; i++){
        sum = sum + i;
    }
    printf("%d\n", sum);
}