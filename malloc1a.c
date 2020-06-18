//
// gcc -o malloc1a malloc1a.c
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("== Malloc example 1a ==\n");

    printf("Request memory\n");
    char *ptr = (char *) malloc(1024);

    if(ptr!=NULL) {

        ptr[0] = 'A';
        ptr[1] = 0;
        printf("buffer: %s\n", ptr);

        printf("Free memory\n");
        free(ptr);
    }
}
