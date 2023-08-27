#include <stdio.h>

#define MK_COLOR(r,g,b) ((b << 16) | (g << 8) | r)

/*
* The OR operator combines all the bits together
*/

int main() {
    int color = MK_COLOR(180, 255, 255);  // Sets color to white (0xFFFFFF)
    printf("Color: 0x%X\n", color);
    return 0;
}