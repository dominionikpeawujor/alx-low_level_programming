#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of an integer
 *
 * Description: This function takes an integer (n)
 * as input and computes and
 * returns the last digit of that integer.
 * The last digit is the remainder of
 * the integer when divided by 10.
 *
 * @n: The integer from which the last digit is extracted
 *
 * Return: The last digit of the input integer (an integer between 0 and 9)
 */
int print_last_digit(int n)
{
	return (n%10);
}
