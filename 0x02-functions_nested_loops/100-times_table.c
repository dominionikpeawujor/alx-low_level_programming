#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0.
 *
 * Description: This function takes an integer 
 * 'n' as input and prints the
 * multiplication table for 'n'. The table starts
 * from 0 and goes up to 'n * 15'
 * in the specified format. It ensures proper formatting and alignment.
 * If 'n' is greater than 15 or less than 0,
 * the function does not print anything.
 *
 * @n: The number for which the multiplication table is generated
 *
 * Return: None (void)
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;		
	}

	int row, column;
	int result;
	int temp;
	int digit;
	
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column == 0)
			{
				_putchar('0');
			}
			else
			{
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
				
				
				
				temp = result;		
				while (temp > 0)
				{
					digit = temp % 10;
					_putchar(digit + '0');
					temp /= 10;

				}
			}
			if (column < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
