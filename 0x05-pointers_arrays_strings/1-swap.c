#include <stdio.h>

void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap_int(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    return 0;
}
