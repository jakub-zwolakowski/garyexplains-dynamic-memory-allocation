//
// gcc -o malloc1 malloc1.c
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("== Malloc example 1 ==\n");

    printf("Request memory\n");
    void *ptr = malloc(1024);

    printf("Free memory\n");
    free(ptr);
}
