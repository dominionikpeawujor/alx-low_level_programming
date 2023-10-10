#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * Description: This function takes an integer (n) as 
 * input and prints the sign
 * of the number. If n is positive, 
 * it prints '+' and returns 1. If n is zero,
 * it prints '0' and returns 0. If n is negative, 
 * it prints '-' and returns -1.
 *
 * @n: The integer to check and print its sign
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
