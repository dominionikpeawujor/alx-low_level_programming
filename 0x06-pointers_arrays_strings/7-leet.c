
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Returns: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	char *result = str;
	char leet_dict[] = "aAeEoOtTlL";
	char leet_replacements[] = "44337711";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_dict[j]; j++)
		{
			if (str[i] == leet_dict[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (result);
}
