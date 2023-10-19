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
	char *result = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	
	/**
	 * Returns: A pointer to the resulting string dest.
	 * */
	return (result);
}
