/*Implement a program that takes three different integers a, b, and c 
and prints the middle value (neither maximum nor minimum). */
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c)) {
        printf("The middle value is: %d\n", a);
    } else if ((b > a && b < c) || (b < a && b > c)) {
        printf("The middle value is: %d\n", b);
    } else {
        printf("The middle value is: %d\n", c);
    }

    return 0;
}