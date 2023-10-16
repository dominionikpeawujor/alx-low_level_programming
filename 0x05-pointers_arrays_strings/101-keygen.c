#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * random_char - Generate a random character from a given character set.
 *
 * Return: A random character from the character set.
 */
char random_char() {
	int choice = rand() % 3;

    if (choice == 0) {
        return 'a' + rand() % 26; /
	return '0' + rand() % 10; // Random digit
    }
    else 
    {
	    
        const char special_chars[] = "!@#$%^&*()_+-=[]{}|;:,.<>?";
        return special_chars[rand() % (sizeof(special_chars) - 1)];
    }
}

/**
 * generate_password - Generate a random password of a specified length.
 * @password: A pointer to the password array.
 * @length: The desired password length.
 */
void generate_password(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = random_char();
    }
    password[length] = '\0';
}i
