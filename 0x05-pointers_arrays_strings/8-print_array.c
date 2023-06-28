#include <stdio.h>

void print_array(int *a, int n) {
    if (a == NULL || n <= 0) {
        return;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        
        if (i != n - 1) {
            printf(", ");
        }
    }
    
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};
    
    print_array(arr1, 5);
    print_array(arr2, 3);
    
    return 0;
}
