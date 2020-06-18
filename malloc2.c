//
// gcc -o malloc2 malloc2.c
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("== Malloc example 2 ==\n");

    printf( "Request memory\n") ;
    void *ptr = malloc(1024);

    printf( "Free memory\n");
    free(ptr);

    printf("Free again\n");
    free(ptr);
}
