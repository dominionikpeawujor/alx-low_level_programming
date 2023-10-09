#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints lowercase alphabets followed by a newline
 * It skips q and e while printing
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
