#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: The number of times to print the diagonal line
 *
 * Return: This function does not return a value.
 */
void print_diagonal(int n)
{
	char space = ' ';
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(space);
		}
		_putchar('\\');
		_putchar('\n');
	}
}

