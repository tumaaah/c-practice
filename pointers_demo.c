#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value via pointer: %d\n", *p);

    *p = 20;
    printf("x after change via pointer: %d\n", x);

    return 0;
}
