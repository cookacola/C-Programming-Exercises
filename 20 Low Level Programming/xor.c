#include <stdio.h>
#include <ctype.h>

#define KEY '&'

int main() {
    int orig_char, new_char;

    while((orig_char = getchar()) != EOF) {
        new_char = orig_char ^ KEY; /* Apply encryption */

        /* Check if control character */
        if(iscntrl(orig_char) || iscntrl(new_char)) {
            putchar(orig_char);
        } else
            putchar(new_char);
    }

    return 0;
}