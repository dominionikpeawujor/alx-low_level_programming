#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: The number of underscores to print
 *
 * Return: This function does not return a value.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
