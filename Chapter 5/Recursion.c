#include <stdio.h>

//Recursive Function
void printHW(int count) {
    if (count == 0)
    {
        return;
    }
    
    printf("Hello World!\n");
    printHW(count -1);
}

int main() {
    int count = 5;
    printHW(count);

    return 0;
}