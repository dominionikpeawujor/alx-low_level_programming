#include <stdio.h>
#include <stdbool.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Returns: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	char *result = str;
	bool capitalize = true;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
		    *str == ',' || *str == ';' || *str == '.' || *str == '!' ||
		    *str == '?' || *str == '"' || *str == '(' || *str == ')' ||
		    *str == '{' || *str == '}')
		{
			capitalize = true;
		}
		else if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str = (*str - 'a' + 'A');
			capitalize = false;
		}
		else
		{
			capitalize = false;
		}
		str++;
	}

	return (result);
}
