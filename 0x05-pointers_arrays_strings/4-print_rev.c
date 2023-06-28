#include <stdio.h>

void print_rev(char *s) {
    if (s == NULL) {
        return;
    }
    
    int length = 0;
    
    // Calculate the length of the string
    while (s[length] != '\0') {
        length++;
    }
    
    // Print the characters in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    
    printf("\n");
}

int main() {
    char str[] = "Hello, World!";
    
    print_rev(str);
    
    return 0;
}
