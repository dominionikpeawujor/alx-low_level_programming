i#include <unistd.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: A pointer to the string.
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
		int length = 0;
		int i;
		int start;

		/* Calculate the length of the string */
		while (str[length] != '\0')
			length++;

		/* Calculate the starting position for the second half */
		if (length % 2 == 0)
			start = length / 2;
		else
			start = (length - 1) / 2;

		/* Print the second half of the string */
		for (i = start; i < length; i++)
			write(1, &str[i], 1);

		write(1, "\n", 1);
	}
}

