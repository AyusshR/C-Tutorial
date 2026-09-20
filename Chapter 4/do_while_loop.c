#include <stdio.h>

int main(){
    int i =5;

    /*do while performs the task first and then checks the condition of while */
    do {
        printf("%d\n", i);
        i--;
    }
    while (i >= 1);

    return 0;
}