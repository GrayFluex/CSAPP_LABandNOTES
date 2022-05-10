#include <stdio.h>
/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
    return (~x)+1;
}
int main(){
    int x;
    scanf("%d", &x);
    printf("%d", negate(x));
    return 0;
}