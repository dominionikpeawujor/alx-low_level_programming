#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 *
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte
 * at the end of dest, and then adds a terminating null byte.
 *
 * Returns: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
	char *result = dest; // Store the start of the destination string

	// Find the end of the destination string
	while (*dest)
	{
		dest++;
	}
	// Append the source string to the destination string
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	// Add a terminating null byte
	*dest = '\0';

	return result; // Return a pointer to the resulting string
}

int main()
{
	char str1[50] = "Hello, ";
	char str2[] = "World!";

	printf("Concatenated string: %s\n", _strcat(str1, str2));
	return 0;
}

