#include <stdio.h>

int main(int argc, char *argv[]) {
    /* Check to see if the correct amount of arguments were entered */
    if(argc != 2) {
        printf("Incorrect number of arguments entered");
        return 2;
    }

    /* Declare file pointer to store pointer to file */
    FILE *fp;

    /* 
    * Store the first argument's pointer in fp
    * Check the pointer to see if it can be read
    */
    if((fp = fopen(argv[1], "r")) == NULL) {
        printf("%s cannot be read", argv[1]);
        return 1;
    }

    /* Print the message and close the file*/
    printf("File can be read");
    fclose(fp);
    return 0;
}