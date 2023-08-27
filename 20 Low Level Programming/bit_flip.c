#include <stdio.h>

#define M(x,y) ((x) ^= (y), (y) ^= (x), (x) ^= (y))

/*
* 1. x = x XOR y
* 2. y = y XOR (x XOR y) = y XOR y XOR x = 0 XOR x = x, so y now holds original value of x
* 3. x = (x XOR y) XOR y = x XOR y XOR x = x XOR x XOR y = 0 XOR y = y, x now holds original value of y
*/

int main() {
    int x = 1011;
    int y = 1010;
    M(x, y);  // Swap x and y
    
    printf("x: %d, y: %d\n", x, y);
    return 0;
}