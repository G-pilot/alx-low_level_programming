#include <stdio.h>

int _strlen(char *s) {
    int length = 0;
    
    if (s == NULL) {
        return 0;
    }
    
    while (*s != '\0') {
        length++;
        s++;
    }
    
    return length;
}

int main() {
    char str[] = "Hello, World!";
    
    int length = _strlen(str);
    printf("Length of string: %d\n", length);
    
    return 0;
}
