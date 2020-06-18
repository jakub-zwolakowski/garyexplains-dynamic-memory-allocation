//
// gcc -o malloc4 malloc4.c
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("== Malloc example 4 ==\n");

    printf("Request memory\n");
    char *ptr = (char *) malloc(64); // Note this is 64 bytes

    if(ptr!=NULL) {
        int i;
        for (i = 0; i < 64;i++) { // 64
            ptr[i] = 'A';
        }
        ptr[i] = 0;

        printf("buffer: %d %s\n", i, ptr);

        printf("Free memory\n");
        free(ptr);
    }
}
