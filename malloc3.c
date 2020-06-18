//
// gcc -o malloc3 malloc3.c
//

#include <stdio.h>
#include <stdlib.h>

char *fill_buffer(char *s) {
  sprintf(s, "This-is-a-string\n");
  free(s);
  return s;
}

int main(void) {
    printf("== Malloc example 3 ==\n");

    printf("Request memory\n");
    void *ptr = malloc(8192);

    printf("fill buffer returned: %s", fill_buffer(ptr));
}
