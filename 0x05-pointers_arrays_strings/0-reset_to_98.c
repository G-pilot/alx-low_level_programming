#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98;
}

int main() {
    int num = 5;
    printf("Before reset: %d\n", num);
    reset_to_98(&num);
    printf("After reset: %d\n", num);

    return 0;
}
