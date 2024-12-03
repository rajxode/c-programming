#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10, b = 7;
    int c;

    // 10 = 1010
    //  7 = 0111

    /*
        AND -> compare bits of both numbers, return 1 if both are 1
        1010 & 0111 => 0010 (2)
    */
    printf("AND operator: %d\n", (a & b)); // output => 2 

    /*
        OR -> compare bits of both numbers, return 1 if atleast one is 1
        1010 | 0111 => 1111 (15)
    */
    printf("OR operator %d\n", (a | b)); // output => 15

    /*
        NOT -> invert the bits of any number, if 0 -> 1, if 1 -> 0
        ~ 00001010 -> 11110101 (-11), using two's complement method
    */
    printf("NOT operator %d\n", (~a)); // output => -11

    /*
        XOR -> compare bits, return 1 when both bits are differnt
        1010 ^ 0111 => 1101 (13)
    */
    printf("XOR operator %d\n", (a ^ b)); // output => 13

    /*
        << -> add n "0" on right side of the binary representation of the number
        0000 1010 << 2 => 0010 1000 (40)

        ( a * 2^n => 10 * 2^2 => 40 )
    */
    printf("<< (left shift) %d\n", (a << 2)); // output => 40

    /*
        >> -> add n "0" on left side of the binary rep. of the number
        0000 1010 >> 2 => 0000 0010 (2)

        ( a / 2^n => 10 / 2^2 => 2)
    */
    printf(">> (right shift) %d\n", (a >> 2)); // output => 2

    return 0;

}