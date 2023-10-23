#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: A pointer to the string to be searched.
 * @needle: A pointer to the substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;

	while (*start)
	{
		char *h = start;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return start;

		start++;
	}

	return NULL;
}
