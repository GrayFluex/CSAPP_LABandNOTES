#include <stdio.h>
/* 
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x) {
    int even = 0x55;   // 0101 0101
    int evenBit = even + (even << 8) + (even << 16) + (even << 24);
    x = x | evenBit;    //even bit set 1 
    x = ~x; //reverse 0 1
    //printf("%x ", x);
    return !x;
}
int main(){
    int x = 0xFFFFFFFD;
    printf("%d ", allOddBits(x));
    x = 0xAAAAAAAA;
    printf("%d ", allOddBits(x));
    return 0;
}