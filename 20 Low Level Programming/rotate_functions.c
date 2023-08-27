#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n) {
    unsigned int bit_size = 32; // Assuming 32-bit unsigned int
    unsigned int shifted_off = i >> (bit_size - n);
    unsigned int rotated_int = i << n;
    rotated_int |= shifted_off;

    return rotated_int;
}

unsigned int rotate_right(unsigned int i, int n) {
    unsigned int bit_size = 32; // Assuming 32-bit unsigned int
    unsigned int shifted_off = i << (bit_size - n);
    unsigned int rotated_int = i >> n;
    rotated_int |= shifted_off;

    return rotated_int;
}

int main() {
    unsigned int num = 0xCC; // Example number in binary
    int n = 16; // Number of positions to rotate

    unsigned int result_left = rotate_left(num, n);
    unsigned int result_right = rotate_right(num, n);

    printf("Original number: 0b11001100 (0xCC)\n");
    printf("After %d-bit left rotation: 0x%08X\n", n, result_left);
    printf("After %d-bit right rotation: 0x%08X\n", n, result_right);

    return 0;
}
