#include <stdio.h>

/**
 * _strncat - Concatenates two strings,
 * limiting the number of characters from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of characters to
 * concatenate from src.
 *
 * This function appends at most n bytes from the
 * src string to the dest string.
 * The src string does not need to be null-terminated
 * if it contains n or more bytes.
 * The function adds a terminating null byte to the
 * end of dest.
 *
 * Returns: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
