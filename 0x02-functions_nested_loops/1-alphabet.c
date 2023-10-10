#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print the lowercase alphabet
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * using the _putchar function. It prints a newline character at the end.
 *
 * Return: None (void)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
