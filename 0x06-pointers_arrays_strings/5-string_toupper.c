#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be converted to uppercase.
 *
 * Returns: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = (*str - 'a' + 'A');
		}
		str++;
	}

	return (result);
}
