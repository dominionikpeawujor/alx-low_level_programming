#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the lowercase alphabet ten times
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * ten times in separate lines, using the _putchar function. It consists of
 * ten sets of alphabet sequences, each followed by a newline character.
 *
 * Return: None (void)
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
