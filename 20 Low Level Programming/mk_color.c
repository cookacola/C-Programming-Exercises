#include <stdio.h>

#define MK_COLOR(r,g,b) ((b << 16) | (g << 8) | r)
#define GET_RED(color) (color << 16 >> 16)
#define GET_GREEN(color) (8 << color >> 8)
#define GET_BLUE(color) (color >> 16)

/*
* The OR operator combines all the bits together
*/

int main() {
    int color = MK_COLOR(180, 255, 255);  // Sets color to white (0xFFFFFF)
    printf("Color: 0x%X\n", color);
    return 0;
}