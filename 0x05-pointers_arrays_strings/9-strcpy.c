#include <stdio.h>

char* _strcpy(char *dest, const char *src) {
    if (dest == NULL || src == NULL) {
        return NULL;
    }
    
    char *ptr = dest;
    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0';
    
    return ptr;
}
