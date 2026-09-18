/*Print 1(True) or 0(False) for following statements :
  a. if it's sunday & it's snowing -> True 
  b. if it's monday or it's raining -> True
  c. if a number is greater than 9 and less than 100 -> True */
#include <stdio.h>

int main(){
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSnowing && isSnowing);

    int isMonday = 1;
    int isRaining = 1;
    printf("%d\n", isMonday || isRaining);

    int x = 77;
    printf("%d", 100 > x && x > 9);
    
    return 0;
}