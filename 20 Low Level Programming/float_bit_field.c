#include <stdio.h>

union float_union {
    float i;
    struct float_bit_field {
        unsigned int fraction : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;        
    } fbf;
} fu;

int main() {
    fu.fbf.sign = 1;
    fu.fbf.exponent = 128;
    fu.fbf.fraction = 0;
    printf("Float: %f\n", fu.i);
    printf("Sign: %d, Exponent: %d, Fraction: %d", fu.fbf.sign, fu.fbf.exponent, fu.fbf.fraction);
    return 0;
}