#include <stdio.h>

/**
 * _strncpy - Copies at most n bytes from the source string to
 * the destination string.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 *
 * This function copies at most n bytes from the src string
 * to the dest string.
 * If src contains fewer than n bytes, null bytes are appended
 * to dest to ensure a
 * total of n bytes are copied.
 * The function does not add a terminating null byte
 * beyond the copied content.
 *
 * Returns: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n) {
	char *result = dest;

	while (*src && n > 0) {
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0) {
		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
}
