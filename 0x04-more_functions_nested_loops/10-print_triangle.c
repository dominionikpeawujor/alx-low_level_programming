#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle made of hashtags
 * @size: The size of the triangle
 *
 * Return: This function does not return a value.
 */
void print_triangle(int size)
{
	int i, j, k;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size; i >= 1; i--)
	{
		for (j = 1; j <= i - 1; j++)
		{	
			_putchar(' ');
		}
		for (k = size - j; k >= 0; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	
}
