#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character from a given character set
char random_char() {
    int choice = rand() % 2; // Randomly choose between lowercase letter and digit
    if (choice == 0) {
        return 'a' + rand() % 26; // Random lowercase letter
    } else {
        return '0' + rand() % 10; // Random digit
    }
}

// Function to generate a random password
void generate_password(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = random_char();
    }
    password[length] = '\0';
}

int main() {
	srand(time(NULL));

    int password_length = 12;
    char password[password_length + 1];

    generate_password(password, password_length);
    printf("Random Password: %s\n", password);

    return (0);
}

