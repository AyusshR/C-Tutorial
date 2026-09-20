/*Keep taking numbers as inputs from the user until
the input is a multiple of 7 */
#include <stdio.h>

int main(){
    int input;
    do {
        printf("Enter a number: ");
        scanf("%d", &input);

        if (input % 7 == 0)
        {
            break;
        }
    }
    //To make the loop infinite put 1 which means true until the if statement inside it breaks
    while (1);
    printf("Input is a multiple of 7");
    return 0;
}