#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Returns: A pointer to the resulting rot13-encoded string.
 */
char *rot13(char *str)
{
	char *result = str;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}

	return (result);
}
