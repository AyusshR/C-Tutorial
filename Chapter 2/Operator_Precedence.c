#include <stdio.h>

int main(){
    /* The operations are performed in this priority order 
      '*'  '/'   '%'  --->  '+'   '-'  ---->   '=' */
    int x = 4 + 9 * 10;
    int y = 4 + 3 / 8 - 9 * 2;

    /* operators of same precedence are applied 
                 left ---> right    */
    printf("%d %d", x, y);
    return 0;
}
    