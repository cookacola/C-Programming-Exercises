#include <stdio.h>

struct float_bit_field {
        unsigned int sign : 1;
        unsigned int exponent : 8;
        unsigned int fraction : 23;
} float1 = {1, 5, 23};

int main() {
    printf("Sign: %d, Exponent: %d, Fraction: %d", float1.sign, float1.exponent, float1.fraction);
    return 0;
}