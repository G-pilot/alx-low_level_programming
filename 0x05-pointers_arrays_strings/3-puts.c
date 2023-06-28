#include <stdio.h>

void _puts(char *str) {
    if (str == NULL) {
        return;
    }
    
    printf("%s\n", str);
}

int main() {
    char str[] = "Hello, World!";
    
    _puts(str);
    
    return 0;
}
