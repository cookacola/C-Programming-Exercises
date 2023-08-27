/* In order to toggle a bit
* First, you figure out the position of a bit
* Then you XOR the bit
*/

int main() {
    int toggle_bit = 4;
    int i = 18;

    return i ^ (1 << toggle_bit);
}