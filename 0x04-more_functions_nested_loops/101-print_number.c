#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 *
 * Return:
 * This function does not return a value.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
