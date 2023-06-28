#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generate_random_char() {
    int random_num = rand() % 62;
    
    if (random_num < 10) {
        // Random number between 0 and 9
        return '0' + random_num;
    } else if (random_num < 36) {
        // Random uppercase letter
        return 'A' + (random_num - 10);
    } else {
        // Random lowercase letter
        return 'a' + (random_num - 36);
    }
}

void generate_password(char *password) {
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generate_random_char();
    }
    
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password
}

int main() {
    char password[PASSWORD_LENGTH + 1];
    
    srand(time(NULL)); // Seed the random number generator with current time
    
    generate_password(password);
    
    printf("Generated password: %s\n", password);
    
    return 0;
}
