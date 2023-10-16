#include <unistd.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	if (s != NULL)
	{
		int length = 0;
		char *end = s;

		/* Calculate the length of the string */
		while (*end)
		{
			length++;
			end++;
		}

		/* Print the string in reverse */
		while (length > 0)
		{
			end--;
			write(1, end, 1);
			length--;
		}

		write(1, "\n", 1);
	}
}

