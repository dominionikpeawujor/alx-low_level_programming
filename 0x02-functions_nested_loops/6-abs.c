#include <stdio.h>
#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 *
 * Description: This function takes an integer (n)
 * as input and computes its
 * absolute value. It returns the absolute value of the input integer.
 *
 * @n: The integer for which the absolute value is computed
 *
 * Return: The absolute value of the input integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
