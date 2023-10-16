#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s)
		{
			length++;
			s++;
		}
	}

	return (length);
}

