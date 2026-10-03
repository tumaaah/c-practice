#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        printf("for loop: %d\n", i);
    }

    int j = 1;
    while (j <= 5) {
        printf("while loop: %d\n", j);
        j++;
    }

    return 0;
}
