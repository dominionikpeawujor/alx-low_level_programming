#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints lowercase alphabets followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
