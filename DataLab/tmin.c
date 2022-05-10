#include <stdio.h>
/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
    return ((0x1) << 31);
}
int main(){
    printf("%d", tmin());
    return 0;
}