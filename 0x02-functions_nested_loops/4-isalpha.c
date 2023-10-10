#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Check if a character is an 
 * alphabetic character
 *
 * Description: This function takes an ASCII value (c) as input and checks if it
 * represents an alphabetic character (either uppercase or lowercase)
 * in the English alphabet. It returns 1 if the character is alphabetic 
 * and 0 otherwise.
 *
 * @c: The ASCII value to be checked
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 123)
	{
 		return (1);
	}
	return (0);
}
