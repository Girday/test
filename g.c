#include <stdio.h>

int summary(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;
    int result = summary(x, y);
    printf("The sum of %d and %d is %d\n", x, y, result);
    return 0;
}
