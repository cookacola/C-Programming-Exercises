#include <stdio.h>

#define M(x,y) ((x) ^= (y), (y) ^= (x), (x) ^= (y))

/*
* The function 
*/

int main() {
    int x = 1011;
    int y = 1010;
    M(x, y);  // Swap x and y
    
    printf("x: %d, y: %d\n", x, y);
    return 0;
}