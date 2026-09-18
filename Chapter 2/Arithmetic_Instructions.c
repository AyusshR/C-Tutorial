/* int op int = int
float op int = float
float op float = float         */
#include <stdio.h>

int main() {
    int x = (int) 1.999999; 
    // (int) forcefully converts the value to an interger//
    printf("%f\n", 5.00/5);
    printf("%f", x); 
    // it gives this output cause 
    return 0;
}