//
// gcc -o malloc1b malloc1b.c
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("== Malloc example 1b ==\n");

    printf("Request memory\n");
    char *ptr = (char *) malloc(64); // Note this is 64 bytes

    if(ptr!=NULL) {
        int i;
        for (i = 0; i < 32;i++) { // Note 32. Safe for now.
            ptr[i] = 'A';
        }
        ptr[i] = 0;
        printf("buffer: %s\n", ptr);

        printf("Free memory\n");
        free(ptr);
    }
}
