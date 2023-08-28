#include <stdio.h>

int main(int argc, char *argv[]) {
    /* Check to see if arguments were entered on the command line */
    if(argc < 2) {
        printf("No arguments on the command line");
        return 2;
    }

    /* Declare file pointer to store pointer to file */
    FILE *fp;

    /* 
    * Store the first argument's pointer in fp
    * Check the pointer to see if it can be read
    */
    for (int i = 1; i < argc; ++i) {
        if ((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("%s cannot be read", argv[i]);
            return 1;
        }
    }

    /* Print the message and close the file*/
    printf("All files can be read");
    fclose(fp);
    return 0;
}