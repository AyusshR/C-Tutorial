//Print the table of the number input by the user
#include <stdio.h>

int main(void){
    int multiply;
    printf("Enter a number: ");
    scanf("%d", &multiply);

    for ( int i = 1; i <= 10 ; i++){
        //printf("%d\n", sum = sum + i);
        printf("%d\n", multiply * i);
    } 

    return 0;
}