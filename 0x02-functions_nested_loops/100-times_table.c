#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Print the n times table, starting with 0.
 *
 * Description: This function takes an integer 'n' as input and prints the
 * multiplication table for 'n'. The table starts from 0 and goes up to 'n * 15'
 * in the specified format. It ensures proper formatting and alignment.
 * If 'n' is greater than 15 or less than 0, the function does not print anything.
 *
 * @n: The number for which the multiplication table is generated
 *
 * Return: None (void)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	    return;
	
	int row, column, result;
	
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				_putchar(' ');
				if (result >= 10 && result < 100)
					_putchar(' ');
				if (result > 0 && result < 10)
					_putchar(' ');
				if (result >= 100)
					_putchar(' ');
				if (result >= 100)
					_putchar((result / 100) + '0');
				if (result >= 10)
					_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
