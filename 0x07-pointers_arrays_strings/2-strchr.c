#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: A pointer to the string to be searched.
 * @c: The character to locate in the string.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	char *result = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		s++;
	}
	if (c == '\0')
		result = s;

	return result;
}

