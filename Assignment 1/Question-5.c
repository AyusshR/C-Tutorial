/* Implement a C program to accept two integer values and swap their values using a third
variable.
Display the values:
• Before swapping
• After swapping
Example:
Before swapping: 10 20
After swapping: 20 10*/
#include <stdio.h>

int main(void){
    int a = 10,b = 20,c;

    printf("%d %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("%d %d", a, b);

    return 0;
}