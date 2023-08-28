#include <stdio.h>

unsigned int f(unsigned int i, int m, int n) {
    return (i >> (m + (1 - n))) & ~(~0 << n);
}

/*
* The value of ~(~0 << n) is n bits of one
* The returns the portion of (i >> (m + 1 - n)) that matches with the bit size of n and starts from m
*/

int main() {
     // For demonstration purposes, let's say i = 0b10110101 (decimal 181), m = 5, n = 3
    unsigned int i = 0b10110101;
    int m = 5;
    int n = 3;
    
    unsigned int result = f(i, m, n);
    printf("The extracted bits as an integer: %d\n", result);  // Output should be 6 (in binary, 110)
    
    return 1;
}