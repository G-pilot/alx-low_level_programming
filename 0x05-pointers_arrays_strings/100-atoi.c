#include <stdio.h>

int _atoi(char *s) {
    if (s == NULL) {
        return 0;
    }
    
    int sign = 1;
    int result = 0;
    int i = 0;
    
    // Skip any leading whitespace characters
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r') {
        i++;
    }
    
    // Check if there is a sign character (+/-)
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }
    
    // Convert the remaining characters to an integer
    while (s[i] >= '0' && s[i] <= '9') {
        // Check for potential overflow before updating the result
        if (result > (INT_MAX - (s[i] - '0')) / 10) {
            if (sign == -1) {
                return INT_MIN;
            } else {
                return INT_MAX;
            }
        }
        
        result = result * 10 + (s[i] - '0');
        i++;
    }
    
    return sign * result;
}
