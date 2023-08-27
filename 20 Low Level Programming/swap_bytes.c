#include <stdio.h>

/* Define the bit flip function */
#define M(x,y) ((x) ^= (y), (y) ^= (x), (x) ^= (y))

int main() {
    unsigned short hex;
    printf("Enter a hexadecimal number: ");
    scanf(" %hx", &hex);
    int x = hex >> 8 & 0xFF;
    int y = hex & 0xFF;
    M(x, y);
    unsigned short flipped_hex = (x << 8) | y;
    printf("Number with bytes swapped: %hx\n", flipped_hex);

    return 0;
}