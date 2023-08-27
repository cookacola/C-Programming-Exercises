#include <stdio.h>

int main() {
    int i = 8;
    int j = 9;

    printf("%d\n", i >> 1 + j >> 1);

    /*
    * Arithmetic has higher precedence over shift operators
    * 1. j + 1, so j is now 10
    * 
    * Shift operators are left-associative
    * 2. i >> j = 10, right shift i by 10 bits
    * 3. i = 0
    * 
    * Operators are shifter to the right again, making it 0
    * 4. i = 0
    */

    i = 1;
    printf("%d\n", i & ~i);

    /*
    * ~ returns the complement
    * 1. i & 0
    * 
    * & returns the AND
    * 2. 0
    */

    i = 2;
    j = 1;
    int k = 0;

    printf("%d\n", ~i & j ^ k);

    /*
    * i = 10, ~10 = 01
    * 1 & 1 = 1
    * 1 ^ 0 = 1
    */

    i = 7;
    j = 8;
    k = 9;

    printf("%d", i ^ j & k);

    /*
    * i = 0111
    * j = 1000
    * k = 1001
    * j & k = 1000
    * i ^ 1000 = 0111 ^ 1000 = 1111 = 15
    */

    return 0;
}