#include <stdio.h>
//2
/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x) {
    unsigned int _Tmax = ((0x1) << 31);
    int t = ~_Tmax;
    return !(x ^ t);
}
int main(){
    int x;
    scanf("%d", &x);
    printf("%d", isTmax(x));
    return 0;
}