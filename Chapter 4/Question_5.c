/*Keep taking numbers as inputs from the user
until user enters an odd number*/
#include <stdio.h>

int main(){
    int input;
    do {
        printf("Enter a number: ");
        scanf("%d", &input);

        if (input % 2 != 0)
        {
            break;
        }
    }
    //To make the loop infinite put 1 which means true until the if statement inside it breaks
    while (1);
    printf("Input is Odd");
    return 0;
}