#include <stdio.h>
#include <string.h>

void puts_half(char *str) {
    if (str == NULL) {
        return;
    }
    
    int length = strlen(str);
    int start;
    
    if (length % 2 == 0) {
        start = length / 2;
    } else {
        start = (length - 1) / 2;
    }
    
    for (int i = start; i < length; i++) {
        printf("%c", str[i]);
    }
    
    printf("\n");
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Goodbye";
    
    puts_half(str1);
    puts_half(str2);
    
    return 0;
}
