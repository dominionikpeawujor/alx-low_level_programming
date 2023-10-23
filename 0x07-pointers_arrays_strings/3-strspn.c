# include <stdio.h>
# include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *start = s;
	int count = 0;

	while (*s)
	{
		char *a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
			break;

		s++;
	}
	return count;
}

