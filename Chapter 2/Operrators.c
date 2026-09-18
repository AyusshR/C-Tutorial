#include <stdio.h>

int main() {
    int a,b;
    a = 5, b = 8;
    // Relational operators
    printf("%d\n", 3 <= 4);
    printf("%d\n", 3 <= 3); // greater than equal to
    printf("%d\n", 10 == 4); // equal to
    printf("%d\n", 3 != 4); // not equal to

    //Logical operators
    printf("%d\n", (3 <= 4) && (5 == 5)); // && means AND, both of them has to be true to give out 1 //
    printf("%d\n", (3 <= 4) || (5 == 5)); // || means OR, either of them has to be true to give out 1 //
    printf("%d\n", !(3 <= 4) || (5 == 5)); // ! means NOT, it basically gives out the oppsite answer //
    
    //Assignment operators
    printf("%d\n", a += b); // Directly adds b to a and changes the value of a, same as a = a + b //
    printf("%d\n", b %= a); // Finds out the remainder of b/a and puts that value in b //
    return 0;
}