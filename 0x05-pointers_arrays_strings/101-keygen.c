#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character from a given character set
char random_char(const char *charset) {
	int index = rand() % strlen(charset);
	return charset[index];
}

// Function to generate a random password
void generate_password(char *password, int length) {
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for (int i = 0; i < length; i++)
	{
		password[i] = random_char(charset);
	}
	password[length] = '\0';
}
