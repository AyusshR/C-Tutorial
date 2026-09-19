#include <stdio.h>

int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    if (num > 0 ){
        printf("Number is positive\n");
        if(num % 2 == 0) {
            printf("Number is Even\n");
        }
        else{
            printf("Number is Odd\n");
        }
    }
    else if (num < 0){
        printf("Number is Negative\n");
    }
    else {
        printf("Number is Zero\n");
    }
}