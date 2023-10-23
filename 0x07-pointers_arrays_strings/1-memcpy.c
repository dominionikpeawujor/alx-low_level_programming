#include "main.h"

/**
 * _memcpy - Copies a memory area from src to dest.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return start;
}

