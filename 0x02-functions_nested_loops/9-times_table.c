#include <stdio.h>
#include "main.h"

#include <stdio.h>

/**
 * times_table - Print the multiplication
 * table for 0 through 9.
 *
 * Description: This function calculates
 * and prints the products of numbers from
 * 0 to 9, forming a multiplication table.
 * It ensures proper formatting to align
 * the results in a tabular form.
 *
 * Return: None (void)
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;
			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
