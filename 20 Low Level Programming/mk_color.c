#include <stdio.h>

#define MK_COLOR(r,g,b) ((r << 16) | (g << 8) | b)
#define GET_BLUE(color) (color) & (0xFF)
#define GET_GREEN(color) (color >> 8) & (0xFF)
#define GET_RED(color) (color >> 16) & (0xFF)

/*
* The OR operator combines all the bits together
*/

/*
* We use the AND operator to "clear" they bytes we don't want
*/

int main() {
    int color = MK_COLOR(255, 150, 125);  // Sets color
    int red = GET_RED(color);
    int green = GET_GREEN(color);
    int blue = GET_BLUE(color);

    printf("Color: 0x%X\n Red: 0x%X\n Green: 0x%X\n Blue: 0x%X\n", color, red, green, blue);
    return 0;
}