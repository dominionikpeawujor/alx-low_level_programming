#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: This function does not return a value.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
