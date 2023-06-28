#include <stdio.h>
#include <string.h>

void rev_string(char *s) {
    if (s == NULL) {
        return;
    }
    
    int length = strlen(s);
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        // Swap characters at start and end positions
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        // Move start and end towards the center
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Before: %s\n", str);
    rev_string(str);
    printf("After: %s\n", str);
    
    return 0;
}
