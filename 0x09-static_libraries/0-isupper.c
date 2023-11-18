#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if a character is an uppercase letter
 * @c: The character to be checked
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

