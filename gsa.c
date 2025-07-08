#include <stdlib.h>

typedef struct {
    int a;
    char b;
} coca;

int main() {
    coca *c = malloc(sizeof(coca));
    if (c == NULL) {
        return 1; // Handle memory allocation failure
    }

    c->a = 42;
    c->b = 'A';
    
    // Use the struct
    printf("coca a: %d, b: %c\n", c->a, c->b);
    
    free(c); // Free allocated memory
    return 0;
}
