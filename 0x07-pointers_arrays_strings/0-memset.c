# include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte used to fill the memory.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
    }
    return start;
}

