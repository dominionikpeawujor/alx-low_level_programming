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

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
  for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
