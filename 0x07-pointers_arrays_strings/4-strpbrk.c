#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing characters to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = s;

	while (*s)
	{
		char *a = accept;
		while (*a)
		{
			if (*s == *a)
				return s;
			a++;
		}
		s++;
	}

	return NULL;
}

