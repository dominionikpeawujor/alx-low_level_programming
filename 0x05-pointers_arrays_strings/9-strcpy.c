#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest != NULL && src != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}

		dest[i] = '\0';
	}

	return dest;
}

