#include <stdio.h>
#include "main.h"

/**
 * _islower - Check if a character is a lowercase letter
 *
 * Description:
 * This function takes an ASCII value (c) as input and checks if it
 * represents a lowercase letter in the English alphabet.
 * It returns 1 if the
 * character is a lowercase letter and 0 otherwise.
 *
 * @c: The ASCII value to be checked
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	return (0);
}
